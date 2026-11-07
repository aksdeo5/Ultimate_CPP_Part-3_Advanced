#include "Widget.hpp"
#include "TextBox.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
#if 0
  // We cannot instantiate an abstract class
  Widget widget;
#endif

  TextBox textBox;

  // We can still create a reference of an abstract class for achieving polymorphism
  Widget &widgetRef = textBox;
  widgetRef.draw();

  // We can still create a pointer to an abstract class for achieving polymorphism
  Widget *widgetPtr = &textBox;
  widgetPtr->draw();

  return 0;
}
