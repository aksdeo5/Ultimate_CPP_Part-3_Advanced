#include "Widget.hpp"
#include "TextBox.hpp"
#include "CheckBox.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

void drawWidget(const Widget &widget);

int main()
{
  TextBox textBox;
  CheckBox checkBox;

  // Polymorphism in action
  // The following function calls behave differently according to the specific form of the object at runtime
  drawWidget(textBox);
  drawWidget(checkBox);

  return 0;
}

// Polymorphic Widget object
// The Widget object can take many different forms at runtime
// The 'draw()' member function behaves differently according to the specific form of the object at runtime
void drawWidget(const Widget &widget)
{
  widget.draw();
}
