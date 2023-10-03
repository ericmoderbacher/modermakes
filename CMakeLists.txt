cmake_minimum_required(VERSION 3.23)

project(Lua_Aided_Design)

set(CMAKE_CXX_STANDARD 20)

add_library(Lua_Aided_Design SHARED)
target_sources(Lua_Aided_Design PRIVATE source/point.cpp source/constraint.cpp)
target_include_directories(Lua_Aided_Design PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(tests)