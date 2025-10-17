cmake_minimum_required(VERSION 3.10)
project(dtle)

# Produce json file for code completion (optional)
set (CMAKE_EXPORT_COMPILE_COMMANDS 1)

# Enable testing
enable_testing()
add_subdirectory(gtest)

# Library
add_library(sense src/Led.cpp src/TempSensor.cpp src/Controller.cpp)
target_include_directories(sense PUBLIC inc)

add_executable(runTests tests/test_sense.cpp)
target_link_libraries(runTests sense gtest_main)

add_test(NAME runTests COMMAND runTests)
