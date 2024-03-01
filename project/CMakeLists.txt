cmake_minimum_required(VERSION 3.28)

project(project)

set(CMAKE_CXX_STANDARD 23)

add_executable(project src/main.cpp)

add_library(project_lib)

target_sources(project_lib PUBLIC
        FILE_SET cxx_modules
        TYPE CXX_MODULES
        FILES src/foo/foo.ixx
              src/foo/bar.ixx
              src/foo/bar_impl.ixx
              src/project.ixx
)

target_link_libraries(project project_lib)