cmake_minimum_required(VERSION 3.10.0)
project(glfw-template VERSION 0.1.0 LANGUAGES C CXX)

# GLFW directory with glfw3Config.cmake
set(glfw3_DIR "C:/Program Files (x86)/GLFW/lib/cmake/glfw3")    # <<< CHANGE THIS
# GLAD include folder
set(GLAD_INCLUDE_DIR "C:/glad/include")                         # <<< CHANGE THIS

find_package(glfw3 3.4 REQUIRED)

include_directories(${GLAD_INCLUDE_DIR})

add_executable(glfw-template main.cpp glad.c)

target_include_directories(${PROJECT_NAME} PRIVATE ${GLFW3_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} glfw)

include(CTest)
enable_testing()

