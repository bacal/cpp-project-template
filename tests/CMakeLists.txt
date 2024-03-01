cmake_minimum_required(VERSION 3.28)

project(tests)

set(CMAKE_CXX_STANDARD 23)

enable_testing()

include(ExternalProject)

find_package(GTest)
if (NOT ${GTest_FOUND})
    include(FetchContent)
    FetchContent_Declare(
            googletest
            GIT_REPOSITORY https://github.com/google/googletest.git
            GIT_TAG main
    )
    # For Windows: Prevent overriding the parent project's compiler/linker settings
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)
endif ()

add_executable(tests
        test_bar.cpp
)

target_link_libraries(tests GTest::gtest_main project_lib)

gtest_discover_tests(tests)
