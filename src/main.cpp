#include "Length.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    Length first{5};

    Length second = first++;
    cout << first << ", " << second << endl;

    first = static_cast<Length>(5);
    second = ++first;
    cout << first << ", " << second << endl;

    first = static_cast<Length>(5);
    second = first--;
    cout << first << ", " << second << endl;

    first = static_cast<Length>(5);
    second = --first;
    cout << first << ", " << second << endl;

    return 0;
}
