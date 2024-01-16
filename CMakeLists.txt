cmake_minimum_required (VERSION 3.25)

project ("cmake_learn")

message("CMAKE_BUILD_TYPE = " ${CMAKE_BUILD_TYPE})

# 包含子项目。
add_subdirectory ("3rd")
add_subdirectory ("01_create_window")
