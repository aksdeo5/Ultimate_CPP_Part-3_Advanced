#include "TextBox.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    TextBox textBox;

    // Invoking a base class member function on an object of derived class
    textBox.disable();
    cout << boolalpha << textBox.isEnabled() << endl;

    return 0;
}
