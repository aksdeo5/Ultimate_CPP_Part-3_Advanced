#include "Point.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
    Point first{5, 6};
    Point second{10, 12};

    Point third = first + second;
    cout << third << endl;

    return 0;
}
