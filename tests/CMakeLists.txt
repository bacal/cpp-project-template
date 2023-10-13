cmake_minimum_required(VERSION 3.20)

project(tests)

set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "aa1f7df0-828a-4fcd-9afc-2dc80491aca7")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP 1)

add_compile_options(-fmodules)

enable_testing()

find_package(GTest REQUIRED)

add_executable(tests
        test_bar.cpp
        test_fizz.cpp)

target_link_libraries(tests GTest::GTest GTest::gtest_main project_lib)

gtest_discover_tests(tests)
