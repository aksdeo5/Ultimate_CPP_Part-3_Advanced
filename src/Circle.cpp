#include "Circle.hpp"

#include <iostream>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  void Circle::draw() const
  {
    cout << "Drwaing a Circle" << endl;
  }

  int Circle::getRadius() const
  {
    return radius;
  }

  void Circle::setRadius(int radius)
  {
    this->radius = radius;
  }

  // Implementations for Circle goes here
} // namespace aksdeo5::ultimate_cpp_advanced
