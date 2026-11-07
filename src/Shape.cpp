#include "Shape.hpp"

#include <iostream>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  void Shape::draw() const
  {
    cout << "Drwaing a Shape" << endl;
  }

  string Shape::getBackground() const
  {
    return background;
  }

  void Shape::setBackground(string background)
  {
    this->background = background;
  }

} // namespace aksdeo5::ultimate_cpp_advanced
