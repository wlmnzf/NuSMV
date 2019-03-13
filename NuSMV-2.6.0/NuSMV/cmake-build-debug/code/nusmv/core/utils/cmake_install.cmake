# Install script for directory: /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/array.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/defs.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/list.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/object.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/portability.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/Sset.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/ustring.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/EnvObject.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/EnvObject_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/OStream.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/Logger.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/WordNumber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/WordNumberMgr.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/WordNumber_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/BigWordNumber_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/assoc.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/error.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/lsort.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/object_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/range.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/TimerBench.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/utils.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/avl.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/heap.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/NodeList.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/Olist.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/Slist.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/ucmd.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/utils_io.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/NodeGraph.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/Stack.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/Pair.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/Triple.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/UStringMgr.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/StreamMgr.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/ErrorMgr.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/LRUCache.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/OAHash.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/OAHash_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/Tuple5.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/DLlist.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/BiMap.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/bmc_profiler.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/watchdog_util.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils/bignumbers" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/bignumbers/bvnumbersInt.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils/bignumbers" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/bignumbers/bignumbers.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils/bignumbers" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/bignumbers/numbersInt.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/utils" TYPE FILE FILES "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/code/nusmv/core/utils/utils_msvc.h")
endif()

