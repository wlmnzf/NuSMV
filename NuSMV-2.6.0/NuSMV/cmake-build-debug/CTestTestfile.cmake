# CMake generated Testfile for 
# Source directory: /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV
# Build directory: /home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(short "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/bin/NuSMV" "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/examples/smv-dist/short.smv")
add_test(bmc "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/cmake-build-debug/bin/NuSMV" "-bmc" "/home/william/CLionProjects/NuSMV/NuSMV-2.6.0/NuSMV/examples/bmc/barrel5.smv")
subdirs("build-cudd")
subdirs("build-MiniSat")
subdirs("code/nusmv/core")
subdirs("code/nusmv/addons_core")
subdirs("code/nusmv/shell")
subdirs("doc")
subdirs("contrib")
subdirs("examples")
