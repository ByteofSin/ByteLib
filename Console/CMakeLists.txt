cmake_minimum_required(VERSION ${MINIMUM_CMAKE_VERSION})

set(This ByteofSin_Console)
set(Headers
    include/Console/Console.h
)

set(Sources
    src/Console.cpp
)

add_library(${This} STATIC ${Headers} ${Sources})


set_target_properties(${This} PROPERTIES
    FOLDER Libraries
    LINKER_LANGUAGE CXX
)

target_include_directories(${This} PUBLIC include)