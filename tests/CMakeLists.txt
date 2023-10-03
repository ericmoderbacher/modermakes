cmake_minimum_required(VERSION 3.23)

enable_testing()

add_executable(testPointts testPoints.cpp)

target_link_libraries(testPointts Lua_Aided_Design)

add_test(NAME testPointts COMMAND "hmmm")