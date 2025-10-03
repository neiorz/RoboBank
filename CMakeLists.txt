cmake_minimum_required(VERSION 3.10)
project(RoboBankCalc LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(RoboBankCalc STATIC
    src/RoboBankCalc.cpp
    include/RoboBankCalc.hpp
)

add_executable(RoboBankDemo src/main.cpp)

target_link_libraries(RoboBankDemo PRIVATE RoboBankCalc)