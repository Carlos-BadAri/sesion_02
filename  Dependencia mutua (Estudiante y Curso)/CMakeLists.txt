cmake_minimum_required(VERSION 4.0)
project(_Dependencia_mutua__Estudiante_y_Curso_)

set(CMAKE_CXX_STANDARD 20)

add_executable(_Dependencia_mutua__Estudiante_y_Curso_ main.cpp
        Estudiante.cpp
        Estudiante.h
        Curso.cpp
        Curso.h)
