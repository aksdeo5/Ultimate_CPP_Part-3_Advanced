#include "Rectangle.hpp"
#include "Circle.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
  Rectangle rectangle;
  Circle circle;

  rectangle.setBackground("orange");
  circle.setBackground("gold");

  cout << rectangle.getBackground() << endl;
  cout << circle.getBackground() << endl;

  return 0;
}
