#include <lylib/lylib.hpp>
#include <lylib/window.hpp>
int main()
{
    std::cout << lylib::getCurrentVersion();
    lylib::init();
    lylib::Window *window = new lylib::Window(800, 600, "First Window");
    while (!window->shouldClose())
    {

        window->updateEssentials();
    }
    lylib::terminate();
    return 0;
}
