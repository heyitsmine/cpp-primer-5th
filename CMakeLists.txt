cmake_minimum_required(VERSION 3.14)
project(cpp_primer)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(main
        exercises/14/14-42.cc)
