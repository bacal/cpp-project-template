cmake_minimum_required(VERSION 3.20)

project(project)

find_package(GTest REQUIRED)

enable_testing()

include_directories(../project/include)

add_executable(tests test.cpp test_bar.cpp)

target_link_libraries(tests GTest::GTest GTest::gtest_main project_lib)

gtest_discover_tests(tests)


