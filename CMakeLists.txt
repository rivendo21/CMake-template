cmake_minimum_required(VERSION 3.20)

# Project name
project(cmakeBasicProjectTemplate)

# Set C++ standard to C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create executable
add_executable(cmakeBasicProjectTemplate main.cpp)

# For multi-file projects with headers and separate .cpp files
# add_executable(cmakeTemplate file1.h file2.h main2.cpp ...)
