#include "Rectangle.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
  /*** Exception Handling ***/

  try
  {
    cout << "Width: ";
    int width;
    cin >> width;

    Rectangle rectangle;

    // Error-prone statement
    rectangle.setWidth(width);

    // The following code is dependent on the previous error-prone code
    cout << "This statement doesn't execute if the exception is thrown." << endl;
  }
  // Catching the potential exception
  catch (const invalid_argument &ex)
  {
    cout << ex.what() << endl;
  }

  // The following code is not dependent on the previous error-prone code
  cout << "This statement always executes, whether or not an exception is thrown." << endl;

  return 0;
}
