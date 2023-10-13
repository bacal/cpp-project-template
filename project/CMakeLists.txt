cmake_minimum_required(VERSION 3.27)

set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "aa1f7df0-828a-4fcd-9afc-2dc80491aca7")

project(project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP 1)

add_compile_options(-fmodules)

add_executable(project src/main.cpp)

add_library(project_lib)

target_sources(project_lib PUBLIC
        FILE_SET cxx_modules
        TYPE CXX_MODULES
        FILES src/foo/foo.ixx
              src/foo/bar.ixx
              src/foo/bar_impl.ixx
              src/project.ixx
              src/baz/baz.ixx
              src/baz/fizz.ixx
              src/baz/fizz_impl.ixx
)

target_link_libraries(project project_lib)