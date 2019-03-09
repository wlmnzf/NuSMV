# Install script for directory: /home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/parser/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/be/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/dag/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/enc/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/ltl/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/mc/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/opt/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/prop/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/sat/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/set/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/simulate/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/trans/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/trace/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/bmc/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/compile/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/dd/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/fsm/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/node/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/rbc/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/cinit/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/utils/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/sexp/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/hrc/cmake_install.cmake")
  include("/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/cmake-build-debug/code/nusmv/core/wff/cmake_install.cmake")

endif()

