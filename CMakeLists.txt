cmake_minimum_required(VERSION 3.22)

project(ccolorlib)

set(CMAKE_CXX_STANDARD 20)

add_library(ccolorlib INTERFACE src/ccolor.hpp)

#target_include_directories(ccolorlib PUBLIC src)
