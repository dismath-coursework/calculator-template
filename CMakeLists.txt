cmake_minimum_required(VERSION 3.16)
project(BigCalculator CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CALC_SOURCES
    # сюда нужо добавлять пути к исходным файлам, например
    src/BigCalculator.cpp
)

add_library(CalcCore STATIC ${CALC_SOURCES})
target_include_directories(CalcCore PUBLIC src/)

add_executable(Calculator
    app/main.cpp
)
target_link_libraries(Calculator PRIVATE CalcCore)
