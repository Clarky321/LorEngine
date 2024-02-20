#include <iostream>
#include <GLFW/glfw3.h>
#include <LorEngineCore/test.hpp>

int main()
{
    std::cout << "Hello from Engine Editor" << std::endl;

    LorEngine::SayTest();

    std::cin.get();
}