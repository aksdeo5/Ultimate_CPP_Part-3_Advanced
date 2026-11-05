#include "TextBox.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    TextBox textBox;
    textBox.setValue("text");
    cout << textBox.getValue() << endl;

    return 0;
}
