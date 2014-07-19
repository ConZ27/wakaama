cmake_minimum_required (VERSION 2.8.3)

project (lwm2mclient)

SET(LIBLWM2M_DIR ${PROJECT_SOURCE_DIR}/../../core)

add_subdirectory(${LIBLWM2M_DIR} ${CMAKE_CURRENT_BINARY_DIR}/core)

add_definitions(-DLWM2M_CLIENT_MODE ${EXT_DEFINES}) 
include_directories (${LIBLWM2M_DIR} ${PROJECT_SOURCE_DIR}/../utils ${EXT_INCLUDE_DIRS})
link_directories(${EXT_LINK_DIRECTORIES})

find_library(LIBCOAP
            NAMES libcoap.so libcoap.a
            PATHS ${LIBLWM2M_DIR}/libcoap)
SET(SOURCES lwm2mclient.c ../utils/commandline.c ../utils/connection.c object_device.c object_firmware.c test_object.c)

add_executable(lwm2mclient ${SOURCES} ${CORE_SOURCES})
if( LIBCOAP )
    message(STATUS ${LIBCOAP})
    target_link_libraries(lwm2mclient ${LIBCOAP})
else()
    message(FATAL_ERROR "FATAL ERROR: missing library!")
endif()
