cmake_minimum_required(VERSION 2.4)
cmake_policy(SET CMP0048 NEW)
project(sandbox)

enable_testing()
find_package(GTest REQUIRED)

if(COMMAND cmake_policy)
    cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

add_subdirectory(application)
add_subdirectory(library)