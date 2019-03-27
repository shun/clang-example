cmake_minimum_required(VERSION 2.8)

set(CMAKE_C_COMPILER "/usr/bin/clang-7")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++-7")

project(clang-example)
set(CMAKE_CXX_FLAGS "-Wall -std=c++17")

add_executable(
	exe
	main.cpp
)
