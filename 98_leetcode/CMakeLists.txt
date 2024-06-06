cmake_minimum_required(VERSION 3.20)

project(leetcode)

set(CMAKE_CXX_STANDARD 17)

file(GLOB LEETCODE_SRC *.cpp)

add_executable(leetcode ${LEETCODE_SRC})
