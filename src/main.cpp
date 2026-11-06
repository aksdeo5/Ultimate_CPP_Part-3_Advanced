#include "Length.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    Length first{5};
    Length second{6};

    Length length = first + second;
    cout << length << endl;

    length = first - second;
    cout << length << endl;

    length = first * second;
    cout << length << endl;

    length = first / second;
    cout << length << endl;

    length = first % second;
    cout << length << endl;

    return 0;
}
