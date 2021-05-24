cmake_minimum_required(VERSION 3.10.2)

project(quick_example LANGUAGES CXX)

if (EMSCRIPTEN)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g --bind")
endif()

add_executable(${PROJECT_NAME} quick_example.cpp)
set(CMAKE_EXECUTABLE_SUFFIX ".js")
