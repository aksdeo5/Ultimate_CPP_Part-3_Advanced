#include "SmartPointer.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    SmartPointer ptr{new int};
    *ptr = 5;
    cout << *ptr << endl;

    *ptr = 11;
    cout << *ptr << endl;

    return 0;
}
