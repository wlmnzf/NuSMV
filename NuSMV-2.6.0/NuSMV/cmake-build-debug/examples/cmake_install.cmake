# Install script for directory: /home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nusmv/examples" TYPE DIRECTORY FILES
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/abp"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/example_irst"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/prod-cons"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/tcas"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/guidance"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/production-cell"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/brp"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/queue"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/deadlock"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/p-queue"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/reactor"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/example_cmu"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/pci"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/smv-dist"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/msi"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/bmc_tutorial"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/m4"
    "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/examples/psl-samples"
    REGEX "/CVS$" EXCLUDE REGEX "/[^/]*\\~$" EXCLUDE REGEX "/\\.[^/]*$" EXCLUDE)
endif()

