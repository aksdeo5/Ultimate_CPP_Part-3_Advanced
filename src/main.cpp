#include "Length.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    Length first{5};
    Length second{6};

    first += second;
    cout << first << endl;

    first = static_cast<Length>(5);
    first -= second;
    cout << first << endl;

    first = static_cast<Length>(5);
    first *= second;
    cout << first << endl;

    first = static_cast<Length>(5);
    first /= second;
    cout << first << endl;

    first = static_cast<Length>(5);
    first %= second;
    cout << first << endl;

    return 0;
}
