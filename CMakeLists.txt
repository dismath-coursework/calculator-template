cmake_minimum_required(VERSION 3.16)
project(BigCalculator CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CalcCore STATIC
    src/BigCalculator.cpp
)
target_include_directories(CalcCore PUBLIC src/)

add_executable(Calculator
    app/main.cpp
)
target_link_libraries(Calculator PRIVATE CalcCore)
