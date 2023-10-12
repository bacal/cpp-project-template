cmake_minimum_required(VERSION 3.20)

project(project)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_library(project_lib src/bar.cpp)

add_executable(project src/main.cpp src/bar.cpp)
