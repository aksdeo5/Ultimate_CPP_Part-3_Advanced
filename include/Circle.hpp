#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_CIRCLE_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_CIRCLE_HPP

#include "Shape.hpp"

namespace aksdeo5::ultimate_cpp_advanced
{
  class Circle : public Shape
  {
  public:
    int getRadius() const;

    void setRadius(int radius);

  private:
    int radius = 0;
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_CIRCLE_HPP
