cmake_minimum_required(VERSION 3.23)

enable_testing()

add_executable(testPoints testPoints.cpp
        ../include/lad_concepts.h)

target_link_libraries(testPoints Lua_Aided_Design)

add_test(NAME testPoints COMMAND "hmmm")