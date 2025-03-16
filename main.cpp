#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

void error_callback(int error, const char* msg) {
    std::cerr << "GLFW Error (" << error << "): " << msg << std::endl;
}

int main(){
    glfwSetErrorCallback(error_callback);
    if(!glfwInit()) {
        std::cerr << "GLFW initialization failed" << std::endl;
        return -1;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(800, 600, "GLFW Window", nullptr, nullptr);
    if(window == NULL) {
        std::cerr << "window creation failed" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "GLAD loading failed" << std::endl;
        return -1;
    }

    while(!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
