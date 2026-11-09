#include <iostream>

using namespace std;

// Function Template
template <typename T>
T larger(T first, T second);

int main()
{
  /*** Templates ***/

  int intLarger = larger(5, 6);
  cout << intLarger << endl;

  double doubleLarger = larger(5.5, 6.6);
  cout << doubleLarger << endl;

  char charLarger = larger('a', 'b');
  cout << charLarger << endl;

  return 0;
}

// Defining a Function Template
template <typename T>
T larger(T first, T second)
{
  return first > second ? first : second;
}
