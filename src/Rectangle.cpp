#include "Rectangle.hpp"

#include <iostream>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  void Rectangle::draw() const
  {
    cout << "Drwaing a Rectangle" << endl;
  }

  int Rectangle::getWidth() const
  {
    return width;
  }

  int Rectangle::getHeight() const
  {
    return height;
  }

  void Rectangle::setWidth(int width)
  {
    if (width < 0)
      throw invalid_argument("The width cannot be negative!");

    if (width > 99)
      throw out_of_range("The width cannot be greater than 99!");

    this->width = width;
  }

  void Rectangle::setHeight(int height)
  {
    if (height < 0)
      throw invalid_argument("The height cannot be negative!");

    if (height > 99)
      throw out_of_range("The width height be greater than 99!");

    this->height = height;
  }

} // namespace aksdeo5::ultimate_cpp_advanced
