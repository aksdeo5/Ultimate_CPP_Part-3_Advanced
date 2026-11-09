#include "Array.hpp"
#include "Pair.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
  /*** Templates ***/

  Array<Pair<string, int>> pairs{3};

  pairs[0] = {"five", 5};
  pairs[1] = {"six", 6};
  pairs[2] = {"eight", 8};

  cout << pairs[0] << endl;
  cout << pairs[1] << endl;
  cout << pairs[2] << endl;

  return 0;
}
