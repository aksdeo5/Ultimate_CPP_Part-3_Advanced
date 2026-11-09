#include <iostream>

using namespace std;

// Function Template
template <typename T>
T larger(T first, T second);

int main()
{
  /*** Templates ***/

  // Providing explicit generic-type-arguments
  auto autoLarger = larger<double>(5, 6.0);

  cout << autoLarger << endl;

  return 0;
}

// Defining a Function Template
template <typename T>
T larger(T first, T second)
{
  return first > second ? first : second;
}
