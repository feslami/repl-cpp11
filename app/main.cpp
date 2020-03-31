#include <iostream>

#include <music.h>

int main()
{
    std::cout << "Hello World!" << std::endl;

    Music("Foo", "Bar", "log");

    std::cout << Music("Foo", "Bar", "log") << std::endl;
    return 0;
}