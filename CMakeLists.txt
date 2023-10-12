cmake_minimum_required(VERSION 3.20)

project(project)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_subdirectory(project)

add_subdirectory(tests)

