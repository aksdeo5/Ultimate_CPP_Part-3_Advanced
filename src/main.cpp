#include <iostream>

using namespace std;

// Function Template with multiple Type-parameters
template <typename K, typename V>
void display(K key, V value);

int main()
{
  /*** Templates ***/

  display("five", 5);
  display(5, "five");
  display("5", "five");
  display(5, 5);

  return 0;
}

// Defining a Function Template with multiple Type-parameters
template <typename K, typename V>
void display(K key, V value)
{
  cout << key << "=" << value << endl;
}
