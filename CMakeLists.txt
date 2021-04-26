cmake_minimum_required(VERSION 3.10)
project(pybind_example)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(pybind11 REQUIRED)
find_package(Boost REQUIRED)

add_subdirectory(example_include)

pybind11_add_module(example_a examplemodulea.cpp)
pybind11_add_module(example_b examplemoduleb.cpp)

target_link_libraries(example_b PRIVATE StateHolder)
target_link_libraries(example_a PRIVATE Q:/rubberband/build/rubberband-static.lib)
