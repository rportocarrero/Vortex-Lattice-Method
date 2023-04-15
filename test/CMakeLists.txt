cmake_minimum_required(VERSION 3.10)

project(vlm_solver_tests)

find_package(GTest REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)


add_executable(vlm_solver_tests
  test_InputGeometry.cpp
  test_InputFreeStream.cpp
  test_InputVortexDistribution.cpp
  test_VLMSolver.cpp)

target_link_libraries(vlm_solver_tests
  PRIVATE
    GTest::Main
    VLMSolver
    InputGeometry
    InputFreeStream
    InputVortexDistribution)

enable_testing()
add_test(vlm_solver_tests vlm_solver_tests)
