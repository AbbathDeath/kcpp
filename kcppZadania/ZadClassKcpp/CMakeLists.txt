cmake_minimum_required(VERSION 3.15)
project(ZadClassKcpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(ZadClassKcpp
        main.cc
        src/ZadKcpp.cc
        src/ZadMetodyAbstrakcyjne.cc
        src/Figura.cc
        include/Figura.h)

target_include_directories(ZadClassKcpp PRIVATE include)