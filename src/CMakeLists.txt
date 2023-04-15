cmake_minimum_required(VERSION 3.10)

project(VLMSolver)

# Add the include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)

# Add the source files
add_library(VLMSolver
  VLMSolver.cpp)

# Link required libraries
target_link_libraries(VLMSolver
  PRIVATE
    InputGeometry
    InputFreeStream
    InputVortexDistribution)
