cmake_minimum_required(VERSION 3.9)
project(design_pattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(design_pattern main.cpp singleton.cpp factory.cpp factory.h)