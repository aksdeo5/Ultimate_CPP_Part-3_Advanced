#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
  Shape shape;
  Rectangle rectangle;
  Circle circle;

  Shape &shapeA = shape;
  shapeA.draw();

  Shape &shapeB = rectangle;
  shapeB.draw();

  Shape &shapeC = circle;
  shapeC.draw();

  return 0;
}
