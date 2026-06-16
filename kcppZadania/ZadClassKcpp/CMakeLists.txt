cmake_minimum_required(VERSION 3.15)
project(ZadClassKcpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(ZadClassKcpp
        main.cc
        src/ZadKcpp.cc
        src/ZadMetodyAbstrakcyjne.cc
        src/Figura.cc
        src/Student.cc
        src/ZadKlasaKonstruktor.cc
        src/ZadParzystosc.cc
        src/ZadPrzekazywanieArgumentow.cc
        src/ZadPrzeciazaniePotega.cc
        include/Figura.h
        include/Student.h
        include/ZadKlasaKonstruktor.h
        include/ZadParzystosc.h
        include/ZadPrzekazywanieArgumentow.h
        include/ZadPrzeciazaniePotega.h)

target_include_directories(ZadClassKcpp PRIVATE include)