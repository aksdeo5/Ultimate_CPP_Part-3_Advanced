#include "Shape.hpp"

namespace aksdeo5::ultimate_cpp_advanced
{
  string Shape::getBackground() const
  {
    return background;
  }

  void Shape::setBackground(string background)
  {
    this->background = background;
  }

} // namespace aksdeo5::ultimate_cpp_advanced
