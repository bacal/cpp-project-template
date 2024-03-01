cmake_minimum_required(VERSION 3.28)

project(project)

set(CMAKE_CXX_STANDARD 23)

enable_testing()

add_subdirectory(project)

add_subdirectory(tests)

