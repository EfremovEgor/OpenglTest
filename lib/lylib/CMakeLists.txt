cmake_minimum_required(VERSION 3.10)
project(Lylib)
add_library(lylib
    include/lylib/lylib.hpp src/lylib.cpp
    include/lylib/exceptions.hpp src/exceptions.cpp
    include/lylib/window.hpp src/window.cpp
)
target_include_directories(lylib PUBLIC include/)
target_link_libraries(lylib glfw)
target_link_libraries(lylib glad)
