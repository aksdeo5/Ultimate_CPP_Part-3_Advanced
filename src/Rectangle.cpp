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

  Rectangle::Rectangle(const Rectangle &source)
  {
    cout << "Construcing a Rectangle with a copy of another object" << endl;
    width = source.width;
    height = source.height;
    color = source.color;
  }

  Rectangle::Rectangle(int width, int height)
  {
    cout << "Construcing a Rectangle with width and height" << endl;
    setWidth(width);
    setHeight(height);
  }

  // Constructor delegation
  Rectangle::Rectangle(int width, int height, const string &color) : Rectangle(width, height)
  {
    cout << "Construcing a Rectangle with color" << endl;
    this->color = color;
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
