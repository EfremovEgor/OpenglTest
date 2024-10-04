#pragma once
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <lylib/exceptions.hpp>
namespace lylib
{

    class Window
    {
    protected:
        GLFWwindow *window;

    public:
        Window(int width, int height, std::string title);
        bool shouldClose();
        void updateEssentials();
        ~Window();
    };
}
