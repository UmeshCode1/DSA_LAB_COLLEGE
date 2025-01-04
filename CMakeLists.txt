cmake_minimum_required(VERSION 3.10)
project(project-name)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(test_program1 tests/test_program1.cpp)
target_link_libraries(test_program1 ${GTEST_LIBRARIES} pthread)

add_test(NAME test_program1 COMMAND test_program1)