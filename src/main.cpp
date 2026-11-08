#include "Rectangle.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

void creatRectangle()
{
  Rectangle rectangle;
  rectangle.setWidth(-1);
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
    cout << ex.what() << endl;
  }

  return 0;
}
