cmake_minimum_required(VERSION 3.24)
project(C__Programmierung)

set(CMAKE_CXX_STANDARD 14)

add_library(FileHandler STATIC FileHandler.cpp FileHandler.h)
add_executable(C__Programmierung main.cpp)
target_link_libraries(C__Programmierung FileHandler)
