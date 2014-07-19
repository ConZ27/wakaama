CLIENT_BIN_DIR=`pwd`
LIBCOAP_DIR=$CLIENT_BIN_DIR/../core/libcoap

if [ ! -e $LIBCOAP_DIR/libcoap.a ]; then
    cd $LIBCOAP_DIR 
    autoconf configure.in > configure
    chmod +x configure
    ./configure
    make
fi

cd $CLIENT_BIN_DIR && cmake -G"Eclipse CDT4 - Unix Makefiles" ../tests/server
