#include "Rectangle.hpp"

#include <iostream>
#include <memory>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
#if 0
    // Creating an object on free-store using raw pointers
    auto rectangle = new Rectangle(5, 6);
    rectangle->draw();
    
    // Needs to manually release dynamically allocated memory on free-store
    delete rectangle;
    // Needs to manually reset pointer
    rectangle = nullptr;
#endif
    // Creating an object on free-store using smart pointers
    // No need to manually release dynamically allocated memory on free-store
    // No need to manually reset pointer
    auto rectangle = make_unique<Rectangle>(5, 6);
    rectangle->draw();

    return 0;
}
