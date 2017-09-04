cmake_minimum_required(VERSION 3.9)
project(gflags_start)

set(CMAKE_CXX_STANDARD 11)
find_package(gflags REQUIRED)
set(SOURCE_FILES main.cpp)
add_executable(gflags_start ${SOURCE_FILES})
target_link_libraries(gflags_start gflags)