#include "Rectangle.hpp"
#include "AccountLocked.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

void login()
{
  throw AccountLocked{};
}

int main()
{
  /*** Exception Handling ***/

  try
  {
    login();
  }
  catch (const exception &ex)
  {
    cerr << ex.what() << endl;
  }

  return 0;
}
