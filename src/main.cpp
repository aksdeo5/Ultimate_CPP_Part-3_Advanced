#include "Length.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    Length first{5};

    // Copy-constructor is invoked
    Length second = first;

    // Assignment-operator is invoked
    second = first;

    return 0;
}
