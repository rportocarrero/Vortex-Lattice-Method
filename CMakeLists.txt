cmake_minimum_required(VERSION 3.10)

project(vlm_solver)

add_subdirectory(src)
add_subdirectory(test)
# Specify the include directories for the project
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_subdirectory(include)
