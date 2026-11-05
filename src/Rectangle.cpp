#include "Rectangle.hpp"

#include <iostream>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  void Rectangle::draw()
  {
    cout << "Drawing rectangle of width " << width << " and height " << height << endl;
  }

  int Rectangle::getArea()
  {
    return width * height;
  }
} // namespace aksdeo5::ultimate_cpp_advanced
