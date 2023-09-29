cmake_minimum_required(VERSION 3.23)

project(Lua_Aided_Design)

set(CMAKE_CXX_STANDARD 20)

add_library(Lua_Aided_Design source/point.cpp
        source/constraint.cpp
        source/constraint.h)

add_executable(LAD source/main.cpp)

target_link_libraries(LAD Lua_Aided_Design)
