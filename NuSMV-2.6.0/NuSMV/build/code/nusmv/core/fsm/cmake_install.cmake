# Install script for directory: /home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm

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
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/fsm" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/FsmBuilder.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/fsm" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/fsm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/fsm/sexp" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/sexp/BoolSexpFsm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/fsm/sexp" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/sexp/SexpFsm_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/fsm/sexp" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/sexp/BoolSexpFsm_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/fsm/sexp" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/sexp/SexpFsm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/fsm/sexp" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/sexp/sexp.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/fsm/bdd" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/bdd/BddFsm.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/fsm/bdd" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/bdd/BddFsm_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/fsm/bdd" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/bdd/bdd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/fsm/bdd" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/bdd/FairnessList.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/fsm/be" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/fsm/be/BeFsm.h")
endif()

