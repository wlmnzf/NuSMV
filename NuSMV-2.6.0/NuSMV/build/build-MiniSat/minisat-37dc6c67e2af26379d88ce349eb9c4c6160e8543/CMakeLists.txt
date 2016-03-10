cmake_minimum_required(VERSION 2.6 FATAL_ERROR)

project(minisat)

#--------------------------------------------------------------------------------------------------
# Configurable options:

option(STATIC_BINARIES "Link binaries statically." ON)
option(USE_SORELEASE   "Use SORELEASE in shared library filename." ON)
option(USE_ZLIB        "Use Zlib." ON)

#--------------------------------------------------------------------------------------------------
# Library version:

set(MINISAT_SOMAJOR   2)
set(MINISAT_SOMINOR   1)
set(MINISAT_SORELEASE 0)

# Compute VERSION and SOVERSION:
if (USE_SORELEASE)
  set(MINISAT_VERSION ${MINISAT_SOMAJOR}.${MINISAT_SOMINOR}.${MINISAT_SORELEASE})
else()
  set(MINISAT_VERSION ${MINISAT_SOMAJOR}.${MINISAT_SOMINOR})
endif()
set(MINISAT_SOVERSION ${MINISAT_SOMAJOR})

#--------------------------------------------------------------------------------------------------
# Dependencies:

if(USE_ZLIB)
  find_package(ZLIB)
  include_directories(${ZLIB_INCLUDE_DIR})
  add_definitions(-DMINISAT_USE_ZLIB)
endif()

include_directories(${minisat_SOURCE_DIR})

if (MSVC)
  include_directories("external")
endif()

#--------------------------------------------------------------------------------------------------
# Compile flags:

add_definitions(-D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS)
if(CMAKE_COMPILER_IS_GNUCXX)
  add_definitions(-fPIC)
endif()

#--------------------------------------------------------------------------------------------------
# Build Targets:

set(MINISAT_LIB_SOURCES
    minisat/utils/Options.cc
    minisat/utils/System.cc
    minisat/core/Solver.cc
    minisat/simp/SimpSolver.cc
    minisat/simp/Solver_C.cc # NuSMV
    )

add_library(minisat-lib-static STATIC ${MINISAT_LIB_SOURCES})
add_library(minisat-lib-shared SHARED ${MINISAT_LIB_SOURCES})

if(USE_ZLIB)
  target_link_libraries(minisat-lib-shared ${ZLIB_LIBRARY})
  target_link_libraries(minisat-lib-static ${ZLIB_LIBRARY})
endif()

add_executable(minisat_core minisat/core/Main.cc)
add_executable(minisat_simp minisat/simp/Main.cc)

if(STATIC_BINARIES)
  target_link_libraries(minisat_core minisat-lib-static)
  target_link_libraries(minisat_simp minisat-lib-static)
else()
  target_link_libraries(minisat_core minisat-lib-shared)
  target_link_libraries(minisat_simp minisat-lib-shared)
endif()

set_target_properties(minisat-lib-static PROPERTIES OUTPUT_NAME "minisat")
set_target_properties(minisat-lib-shared
  PROPERTIES
    OUTPUT_NAME "minisat"
    VERSION ${MINISAT_VERSION}
    SOVERSION ${MINISAT_SOVERSION})

set_target_properties(minisat_simp       PROPERTIES OUTPUT_NAME "minisat")

#--------------------------------------------------------------------------------------------------
# Installation targets:

install(TARGETS minisat-lib-static minisat-lib-shared minisat_core minisat_simp
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

install(DIRECTORY minisat/mtl minisat/utils minisat/core minisat/simp
        DESTINATION include/minisat
        FILES_MATCHING PATTERN "*.h")


### NuSMV ###################################################################
set(minisat_libname MiniSat)
get_target_property(_minisat_lib_loc minisat-lib-static LOCATION)
get_filename_component(_minisat_lib_ext "${_minisat_lib_loc}" EXT)

if (MSVC)
  set(_minisat_lib_name
    "${minisat_libname}${_minisat_lib_ext}")
else()
  set(_minisat_lib_name
    "${CMAKE_STATIC_LIBRARY_PREFIX}${minisat_libname}${CMAKE_STATIC_LIBRARY_SUFFIX}")
endif()

add_custom_target(lib DEPENDS minisat-lib-static
                  COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${PROJECT_SOURCE_DIR}/minisat/simp/Solver_C.h" "${PROJECT_BINARY_DIR}/Solver_C.h"
                  COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${_minisat_lib_loc}" "${PROJECT_BINARY_DIR}/${_minisat_lib_name}"
                  )
#############################################################################
