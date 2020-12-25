cmake_minimum_required(VERSION 3.17)
project(func_test)

set(CMAKE_CXX_STANDARD 14)

add_executable(func_test main.cpp Function.cpp Function.h Parabola.cpp Parabola.h Hyperbola.cpp Hyperbola.h Exponenta.cpp Exponenta.h Polynom.cpp Polynom.h)