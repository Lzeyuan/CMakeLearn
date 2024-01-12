cmake_minimum_required(VERSION 3.12)

project(glfw)

add_library(
    glfw
    INTERFACE 
)

target_include_directories(
    glfw
    INTERFACE 
    "include"
)

target_link_directories(
    glfw
    INTERFACE
    "lib"
)

target_link_libraries(
    glfw
    INTERFACE
    glfw3
)