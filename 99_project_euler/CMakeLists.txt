cmake_minimum_required(VERSION 3.20)

project(project_euler)

set(CMAKE_CXX_STANDARD 17)

file(GLOB EULER_SRC *.cpp)

add_executable(${PROJECT_NAME} ${EULER_SRC})
