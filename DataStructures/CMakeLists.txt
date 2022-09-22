cmake_minimum_required(VERSION 3.12)

set(This ByteofSin_DataStructures)

set(Headers
    # Linear
    include/DataStructures/Linear/Array.h
)

set(Sources
    # Node
    src/Node/Node.h
    src/Node/Node.cpp
)

add_library(${This} STATIC 
    ${Headers}
    ${Sources}
)

set_target_properties(${This} PROPERTIES
        LINKER_LANGUAGE CXX
        Folder Libraries
)

target_include_directories(${This} PUBLIC include)

add_subdirectory(test)