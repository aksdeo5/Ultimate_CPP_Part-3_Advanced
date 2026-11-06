#include "Widget.hpp"
#include "TextBox.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
  TextBox textBox;

  // Object upcasting conversion happens by default (compiler-defined)
  // Object slicing happens
  Widget widget = textBox;

#if 0
  // Object downcasting conversion cannot happen by default (Not compiler-defined)
  // Implementing user-defined object downcasting is a bad practice
  TextBox textBox = widget;
#endif

  // Reference upcasting conversion happens
  // No object slicing happens as only reference is upcasted and assigned
  Widget &widgetRef = textBox;

#if 0
  // Reference downcasting conversion cannot happen
  TextBox &textBoxRef = widget;
#endif

  // Pointer upcasting conversion happens
  // No object slicing happens as only pointer is upcasted and assigned
  Widget *widgetPtr = &textBox;

#if 0
  // Pointer downcasting conversion cannot happen
  TextBox *textBoxPtr = &widget;
#endif

  return 0;
}
