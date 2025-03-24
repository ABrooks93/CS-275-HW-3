cmake_minimum_required(VERSION 3.30)
project(lyssa_HW3_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(lyssa_HW3_cpp main.cpp
        Polygon.h
        Polygon.cpp
        Person.h
        Person.cpp
        Rectangle.h
        Rectangle.cpp
        Triangle.h
        Triangle.cpp
        Doctor.h
        Doctor.cpp
        Pediatrician.h
        Pediatrician.cpp
        Surgeon.h
        Surgeon.cpp)
