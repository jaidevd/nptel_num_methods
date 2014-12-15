cmake_minimum_required(VERSION 2.8.4)
project(numerical_methods)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "/Users/jaidevd/github/misc/numerical_methods")
set(RUNTIME_OUTPUT_DIRECTORY "/Users/jaidevd/github/misc/numerical_methods")

set(SOURCE_FILES arrays/2d_array_to_func.c)
add_executable(numerical_methods.out ${SOURCE_FILES})
