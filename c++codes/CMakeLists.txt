cmake_minimum_required(VERSION 3.6)
project(c++codes)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES a.cpp)
add_executable(c++codes ${SOURCE_FILES})
add_executable(a a.cpp)
