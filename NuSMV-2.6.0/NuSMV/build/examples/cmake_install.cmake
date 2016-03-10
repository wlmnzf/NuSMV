# Install script for directory: /home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nusmv/examples" TYPE DIRECTORY FILES
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/abp"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/example_irst"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/prod-cons"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/tcas"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/guidance"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/production-cell"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/brp"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/queue"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/deadlock"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/p-queue"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/reactor"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/example_cmu"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/pci"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/smv-dist"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/msi"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/bmc_tutorial"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/m4"
    "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/psl-samples"
    REGEX "/CVS$" EXCLUDE REGEX "/[^/]*\\~$" EXCLUDE REGEX "/\\.[^/]*$" EXCLUDE)
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

