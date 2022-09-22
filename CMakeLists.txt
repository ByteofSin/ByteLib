#################################################
# Cmake Properties
cmake_minimum_required(VERSION 3.23.1)

if(${CMAKE_VERSION} VERSION_LESS 3.23) 
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
else ()
    cmake_policy(VERSION ${MINIMUM_CMAKE_VERSION})
endif()


set_property(GLOBAL PROPERTY USE_FOLDERS ON)

#################################################
# Project Properties
project(
    ByteLib
    VERSION 0.0.0.1
    DESCRIPTION "A library to store reusable code"
    LANGUAGES CXX C
)

# Language Standards
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 20)

#################################################
# Subdirectories
add_subdirectory(Utility)
add_subdirectory(DataStructures)
add_subdirectory(Logging)
add_subdirectory(Messaging)
add_subdirectory(Console)