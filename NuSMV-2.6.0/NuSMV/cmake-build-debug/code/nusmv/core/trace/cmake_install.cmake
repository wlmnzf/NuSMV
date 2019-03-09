# Install script for directory: /home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/pkg_trace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/TraceLabel.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/TraceXml.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/TraceMgr.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/TraceOpt.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/Trace.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/Trace_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/plugins" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/plugins/TraceExplainer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/plugins" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/plugins/TraceTable.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/plugins" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/plugins/TraceExplainer_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/plugins" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/plugins/TraceTable_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/plugins" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/plugins/TraceXmlDumper.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/plugins" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/plugins/TraceXmlDumper_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/plugins" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/plugins/TracePlugin.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/plugins" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/plugins/TracePlugin_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/plugins" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/plugins/TraceCompact.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/plugins" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/plugins/TraceCompact_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/traceExec.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/BaseTraceExecutor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/BaseTraceExecutor_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/CompleteTraceExecutor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/CompleteTraceExecutor_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/PartialTraceExecutor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/PartialTraceExecutor_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/BDDCompleteTraceExecutor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/BDDCompleteTraceExecutor_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/BDDPartialTraceExecutor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/BDDPartialTraceExecutor_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/SATCompleteTraceExecutor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/SATCompleteTraceExecutor_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/SATPartialTraceExecutor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/exec" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/exec/SATPartialTraceExecutor_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/eval" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/eval/BaseEvaluator.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/eval" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/eval/BaseEvaluator_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/loaders" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/loaders/TraceLoader.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/loaders" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/loaders/TraceLoader_private.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/loaders" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/loaders/TraceXmlLoader.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/trace/loaders" TYPE FILE FILES "/home/william/NuSMV-a/NuSMV-2.6.0/NuSMV/code/nusmv/core/trace/loaders/TraceXmlLoader_private.h")
endif()

