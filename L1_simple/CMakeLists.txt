cmake_minimum_required(VERSION 2.8.11)
project(demo)

set(CMAKE_CXX_STANDARD 11)

set(GTEST googletest-release-1.8.1)
include_directories("./include" "${GTEST}/googletest/include/")
link_directories("build/gtest/googlemock/gtest/")


add_library(${CMAKE_PROJECT_NAME}_lib src/demo.cpp)

add_executable(unit_test test/unit_test_2.cpp)
target_link_libraries(unit_test ${CMAKE_PROJECT_NAME}_lib gtest gtest_main pthread)
#when you apply main function in test program cpp file, you can delete gtest_main lib
target_link_libraries(unit_test ${CMAKE_PROJECT_NAME}_lib gtest pthread)