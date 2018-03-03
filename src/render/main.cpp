#include <iostream>

#include "window_mock.h"
#include "render.h"


int main()
{
    int screen_width = 800;
    int screen_height = 600;

    GLFWwindow* window = create_context_window(screen_width, screen_height);

    glEnable(GL_DEPTH_TEST);

    // Dependecy inversion here -- combine

    Render dummy(window);
    dummy.set_shader("../resources/shaders/vertex.glsl", "../resources/shaders/fragment.glsl");
    dummy.load_puppet("/home/head/Development/FaceRig/resources/puppets/nanosuit/nanosuit.obj");
    dummy.run();

    glfwTerminate();

    return 0;
}