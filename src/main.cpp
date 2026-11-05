#include "Rectangle.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    // Constant Object
    // All member variables are treated as constant for a constant object
    const Rectangle rectangle{5, 6};

    // Only const-qualified member functions can be invoked on a constant object
    cout << rectangle.getWidth() << endl;
    cout << rectangle.getHeight() << endl;
    cout << rectangle.getArea() << endl;
    rectangle.draw();

    return 0;
}
