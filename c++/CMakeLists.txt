cmake_minimum_required(VERSION 3.6)
project(AoC15)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp md5.cpp)
add_executable(AoC15 ${SOURCE_FILES})