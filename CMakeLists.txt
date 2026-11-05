cmake_minimum_required(VERSION 3.15)
project(MyProgram LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES "src/*.cpp")

add_executable(my_program ${SOURCES})
target_include_directories(my_program PRIVATE include)
