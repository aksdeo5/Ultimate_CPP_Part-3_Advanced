#include "Rectangle.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    Rectangle rectangle;

    // Mutating the state of an object through a setter
    // A setter validates input and prevents the object from going into a bad state
    rectangle.setWidth(-1);

    return 0;
}
