#include "Rectangle.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    // Invoking explicitly added default constructor
    Rectangle rectangle;

    cout << rectangle.getArea() << endl;

    return 0;
}
