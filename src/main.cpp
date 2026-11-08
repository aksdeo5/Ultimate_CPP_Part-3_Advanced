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
  // Catching multiple exceptions
  /*
    While catching multiple exceptions from the same inheritance hierarchy,
    they should be ordered from the most specific to the most generic.
  */
  catch (const out_of_range &ex)
  {
    cout << ex.what() << endl;
  }

  catch (const logic_error &ex)
  {
    cout << ex.what() << endl;
  }

  // The following code is not dependent on the previous error-prone code
  cout << "This statement always executes, whether or not an exception is thrown." << endl;

  return 0;
}
