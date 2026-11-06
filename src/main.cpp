#include "Widget.hpp"
#include "TextBox.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

void drawWidget(Widget &widget);

int main()
{
  TextBox textBox;
  drawWidget(textBox);

  return 0;
}

void drawWidget(Widget &widget)
{
  widget.draw();
}
