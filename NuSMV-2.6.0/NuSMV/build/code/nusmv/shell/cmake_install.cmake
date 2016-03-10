# Install script for directory: /home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/code/nusmv/shell

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/parser/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/enc/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/ltl/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/mc/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/opt/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/prop/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/simulate/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/trace/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/bmc/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/compile/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/dd/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/fsm/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/cinit/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/utils/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/hrc/cmake_install.cmake")
  INCLUDE("/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/cmd/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

