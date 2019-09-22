cmake_minimum_required(VERSION 3.14)
project(cpp_primer)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(main
        exercises/13/StrVec.cc
        exercises/13/String.cc
        exercises/13/13-48.cc)
