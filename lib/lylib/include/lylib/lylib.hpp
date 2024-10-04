#pragma once
#include <string>
#include <lylib/exceptions.hpp>
namespace lylib
{
    const int REVISION_VERSION = 1;
    const int MINOR_VERSION = 0;
    const int MAJOR_VERSION = 0;
    std::string getCurrentVersion();
    void init();
    void terminate();
}
