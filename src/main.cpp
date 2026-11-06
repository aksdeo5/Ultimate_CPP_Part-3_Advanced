#include "Array.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    Array array{5};
    array[0] = 2;
    cout << array[0] << endl;

    // Following statement throws exception
    array[5] = 13;

    return 0;
}
