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
        src/ZadArytmetykaWskZamiana.cc
        src/ZadArytmetykaWskSuma.cc
        src/ZadArytmetykaWskPrzesuniecie.cc
        include/Figura.h
        include/Student.h
        include/ZadKlasaKonstruktor.h
        include/ZadParzystosc.h
        include/ZadPrzekazywanieArgumentow.h
        include/ZadPrzeciazaniePotega.h
        include/ZadArytmetykaWskZamiana.h
        include/ZadArytmetykaWskSuma.h
        include/ZadArytmetykaWskPrzesuniecie.h)

target_include_directories(ZadClassKcpp PRIVATE include)