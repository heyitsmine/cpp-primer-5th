cmake_minimum_required(VERSION 3.14)
project(cpp_primer)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(main
        exercises/15/Quote.cc
        exercises/15/Bulk_quote.cc
        exercises/15/Limited_quote.cc
        exercises/15/Disc_quote.cc
        exercises/15/Basket.cc exercises/15/15-30.cc)
