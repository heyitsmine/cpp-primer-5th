cmake_minimum_required(VERSION 3.14)
project(cpp_primer)

set(CMAKE_CXX_STANDARD 11)

include_directories(examples)

add_executable(main exercises/11/11-38.cc)
