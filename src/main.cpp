#include "Length.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    Length first{5};
    Length second{6};

    cout << boolalpha << (first < second) << endl;
    cout << boolalpha << (first <= second) << endl;
    cout << boolalpha << (first > second) << endl;
    cout << boolalpha << (first >= second) << endl;

    return 0;
}
