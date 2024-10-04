cmake_minimum_required(VERSION 3.10)
project(opengl)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(main ./src/main.cpp)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(./lib/GLFW)
add_subdirectory(./lib/glad)
add_subdirectory(./lib/lylib)
target_link_libraries(main glfw)
target_link_libraries(main glad)
target_link_libraries(main lylib)
find_package(OpenGL REQUIRED)
target_link_libraries(main OpenGL::GL)


