cmake_minimum_required(VERSION 3.10.0)
project(glfw-template VERSION 0.1.0 LANGUAGES C CXX)

set(glfw3_DIR "C:/Program Files (x86)/GLFW/lib/cmake/glfw3")
find_package(glfw3 3.4 REQUIRED)

# GLAD include folder
include_directories("C:/glad/include")

add_executable(glfw-template main.cpp glad.c)

target_include_directories(${PROJECT_NAME} PRIVATE ${GLFW3_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} glfw)

include(CTest)
enable_testing()

