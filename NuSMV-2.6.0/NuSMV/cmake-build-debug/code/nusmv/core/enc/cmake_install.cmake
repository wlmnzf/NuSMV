# Install script for directory: /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/enc.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/operators.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/base" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/base/BaseEnc.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/base" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/base/BaseEnc_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/base" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/base/BoolEncClient.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/base" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/base/BoolEncClient_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/bool" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/bool/BitValues.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/bool" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/bool/BoolEnc.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/bool" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/bool/BoolEnc_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/bdd" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/bdd/BddEncCache.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/bdd" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/bdd/BddEnc.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/bdd" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/bdd/BddEnc_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/bdd" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/bdd/bdd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/be" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/be/BeEnc.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/be" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/be/BeEnc_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/utils/AddArray.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/enc/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/enc/utils/OrdGroups.h")
endif()

