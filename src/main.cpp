#include "Rectangle.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

void creatRectangle()
{
  try
  {
    // Open some system resource handlers
    Rectangle rectangle;
    rectangle.setWidth(-1);
  }
  catch (const invalid_argument &e)
  {
    // Release the system resource handlers
    cout << "Releasing the open system resource handlers" << endl;
    throw;
  }
}

void doWork()
{
  creatRectangle();
}

int main()
{
  /*** Exception Handling ***/

  // The most generic exception handler wrapping all code in the main function
  try
  {
    doWork();
  }
  catch (const exception &ex)
  {
    // Actually catching the exception
    cerr << ex.what() << endl;
  }

  return 0;
}
