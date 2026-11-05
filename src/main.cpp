#include "Rectangle.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    // Creating an object of a class
    Rectangle rectangle;

    // Accessing public members of a class
    rectangle.width = 5;
    rectangle.height = 6;
    cout << rectangle.getArea() << endl;

    Rectangle first;
    Rectangle second;

    // Two objects are distinct instances in memory
    cout << &first << endl;
    cout << &second << endl;

    return 0;
}
