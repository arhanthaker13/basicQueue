cmake_minimum_required(VERSION 3.23)
project(circularQueue)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(circularQueue
        circularQueue.cpp
        circularQueue.hpp
        main.cpp)
