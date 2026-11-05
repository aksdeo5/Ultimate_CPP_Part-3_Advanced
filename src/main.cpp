#include "Rectangle.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
#if 0
    // Adding any explicit constructor removes the implicit default constructor
    Rectangle rectangle;
#endif

    Rectangle rectangle{5, 6};
    cout << rectangle.getArea() << endl;

    return 0;
}
