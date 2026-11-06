#include "Rectangle.hpp"

namespace aksdeo5::ultimate_cpp_advanced
{
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
    this->width = width;
  }

  void Rectangle::setHeight(int height)
  {
    this->height = height;
  }

} // namespace aksdeo5::ultimate_cpp_advanced
