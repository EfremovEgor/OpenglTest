#include <lylib/lylib.hpp>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace lylib
{
    std::string getCurrentVersion()
    {
        return std::to_string(MAJOR_VERSION) + "." + std::to_string(MINOR_VERSION) + "." + std::to_string(REVISION_VERSION);
    }

    void init()
    {
        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    }
    void terminate()
    {
        glfwTerminate();
    }
}
