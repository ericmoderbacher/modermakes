cmake_minimum_required(VERSION 3.23)

project(Lua_Aided_Design)
set(CMAKE_CXX_STANDARD 23)

include(ExternalProject)
ExternalProject_Add(
        lua
        PREFIX ${CMAKE_BINARY_DIR}/_deps
        SOURCE_DIR ${CMAKE_SOURCE_DIR}/lua  # Replace with the actual path to the Lua submodule
        CONFIGURE_COMMAND ""
        BUILD_COMMAND make  # Specifying 'make' directly
        BUILD_IN_SOURCE 1
        INSTALL_COMMAND ""
)

add_library(Lua_Aided_Design SHARED
        source/point.cpp
        source/line.cpp
        source/rasterCube.cpp
        source/rasterCube.h
        source/shellResolver.cpp
        source/shellResolver.h
        source/ridgid_object.cpp
        source/ridgid_object.h
)
target_sources(Lua_Aided_Design PRIVATE source/point.cpp source/constraint.cpp)
target_include_directories(Lua_Aided_Design PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


# add compiler warnings per Jason Turner's advice https://github.com/cpp-best-practices/cppbestpractices/blob/master/02-Use_the_Tools_Available.md#compilers
if (MSVC)
    target_compile_options(Lua_Aided_Design PRIVATE /permissive- /W4 /w14640)
else ()
    target_compile_options(Lua_Aided_Design PRIVATE -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic)
endif ()

add_subdirectory(tests)