cmake_minimum_required(VERSION 3.29)
project(Practica_examen)

set(CMAKE_CXX_STANDARD 14)

include_directories(eje1)
include_directories(eje2)
include_directories(eje3)
include_directories(eje4)

add_executable(Practica_examen
    main.cpp
    eje1/Condicionales.cpp
    eje1/Condicionales.h
    eje2/switch.cpp
    eje2/switch.h
    eje3/bucles.cpp
    eje3/bucles.h
    eje4/Arrays.cpp
    eje4/Arrays.h
)
