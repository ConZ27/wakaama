BIN_DIR=`pwd`
LIBCOAP_DIR=$BIN_DIR/../core/libcoap

cd $LIBCOAP_DIR && make distclean
cd $BIN_DIR && rm -rf CMakeCache.txt  CMakeFiles  cmake_install.cmake  core Makefile lwm2mserver
