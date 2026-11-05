#include "Rectangle.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

void show_rectangle(Rectangle rectangle)
{
}

int main()
{
    Rectangle first{5, 6};
    Rectangle second{10, 12};

    // Accessing a public static member of a class
    cout << Rectangle::getObjectsCount() << endl;

    return 0;
}
