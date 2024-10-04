#pragma once
#include <iostream>

class GladLoadException : public std::exception
{
public:
    char *what();
};
class WindowCreationException : public std::exception
{
public:
    char *what();
};