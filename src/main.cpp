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

    // Copy-constructor is invoked when an object is intialized with another object
    // Following statement is no longer valid if the copy-constrcutor is deleted
    Rectangle second = first;

    // Copy-constructor is invoked when an object is passed to a function by value
    // Following statement is no longer valid if the copy-constrcutor is deleted
    show_rectangle(second);

    return 0;
}
