# CMake generated Testfile for 
# Source directory: /home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV
# Build directory: /home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(short "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/bin/NuSMV" "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/smv-dist/short.smv")
ADD_TEST(bmc "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/build/bin/NuSMV" "-bmc" "/home/klarner/Talks/2016/Softwarepraktikum/NuSMV-2.6.0/NuSMV/examples/bmc/barrel5.smv")
SUBDIRS(build-cudd)
SUBDIRS(build-MiniSat)
SUBDIRS(code/nusmv/core)
SUBDIRS(code/nusmv/addons_core)
SUBDIRS(code/nusmv/shell)
SUBDIRS(doc)
SUBDIRS(contrib)
SUBDIRS(examples)
