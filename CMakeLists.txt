cmake_minimum_required(VERSION 3.10)
project(SinSum)

option(USE_FLOAT "Use float instead of double" OFF)

if(USE_FLOAT)
    add_compile_definitions(ARRAY_TYPE=float)
else()
    add_compile_definitions(ARRAY_TYPE=double)
endif()

add_executable(sin_sum sin_sum.cpp)
