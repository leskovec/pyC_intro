cmake_minimum_required(VERSION 3.20)
project("Pybind11 Tutorial Intro")

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../pybind11
                 ${CMAKE_CURRENT_BINARY_DIR}/pybind11)

pybind11_add_module(hello module.cpp)



