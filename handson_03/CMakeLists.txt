cmake_minimum_required(VERSION 3.10.2)

project(filetest LANGUAGES CXX)

if (EMSCRIPTEN)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g --embed-file hello_world.txt")
  set(CMAKE_EXECUTABLE_SUFFIX ".html")
endif()

add_executable(${PROJECT_NAME} file.cpp)
