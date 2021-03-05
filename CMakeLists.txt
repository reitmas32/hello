cmake_minimum_required(VERSION 3.10)

# set the project name
project(hello)

# add the executable
add_executable(hello src/main.cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a")