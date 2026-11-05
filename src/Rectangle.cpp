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

  Rectangle::Rectangle(int width, int height)
  {
    cout << "Construcing a Rectangle" << endl;
    setWidth(width);
    setHeight(height);
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
      throw invalid_argument("width");

    this->width = width;
  }

  void Rectangle::setHeight(int height)
  {
    if (height < 0)
      throw invalid_argument("height");

    this->height = height;
  }

} // namespace aksdeo5::ultimate_cpp_advanced
