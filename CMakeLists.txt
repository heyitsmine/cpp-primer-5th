cmake_minimum_required(VERSION 3.14)
project(cpp_primer)

set(CMAKE_CXX_STANDARD 11)

include_directories(examples)

add_executable(main exercises/12/12-29.cc exercises/12/QueryResult.cc exercises/12/TextQuery.cc)
