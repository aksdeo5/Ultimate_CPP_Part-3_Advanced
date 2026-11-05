#include "Rectangle.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    Rectangle rectangle;

    // Cannot access private members of a class from outside
    rectangle.width = -1;

    return 0;
}
