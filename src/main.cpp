#include "Pair.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
  /*** Templates ***/

  Pair pair{"five", 5};

  cout << pair.getKey() << "=" << pair.getValue() << endl;

  return 0;
}
