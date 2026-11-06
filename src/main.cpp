#include "Point.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    Point first{5, 6};
    Point second{5, 6};
    Point third{10, 12};

    cout << boolalpha << (first == second) << endl;
    cout << boolalpha << (first == third) << endl;

    return 0;
}
