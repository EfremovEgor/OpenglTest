#include <lylib/window.hpp>
namespace lylib
{

    Window::Window(int width, int height, std::string title)
    {
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        this->window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);
        if (window == NULL)
        {
            glfwTerminate();
            throw WindowCreationException();
        }
        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
        {
            throw GladLoadException();
        }
        glfwMakeContextCurrent(window);
        glViewport(0, 0, width, height);
    }
    bool Window::shouldClose()
    {
        return (glfwWindowShouldClose(this->window) == 0);
    }
    void Window::updateEssentials()
    {
        glfwSwapBuffers(this->window);
        glfwPollEvents();
    }
    Window::~Window()
    {
    }
}