#include "lylib/exceptions.hpp"

char *GladLoadException::what()
{

    return "Failed to initialize GLAD";
}

char *WindowCreationException::what()
{
    return "Failed to create GLFW window";
}
