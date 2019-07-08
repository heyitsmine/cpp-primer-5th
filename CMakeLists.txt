cmake_minimum_required(VERSION 3.14)
project(cpp_primer)

set(CMAKE_CXX_STANDARD 11)

include_directories(./1)

add_executable(book exercises/1-20.cc)