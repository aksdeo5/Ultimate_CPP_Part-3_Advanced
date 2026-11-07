#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_RECTANGLE_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_RECTANGLE_HPP

#include "Shape.hpp"

namespace aksdeo5::ultimate_cpp_advanced
{
  class Rectangle : public Shape
  {
  public:
    void draw() const override;

    int getWidth() const;
    int getHeight() const;

    void setWidth(int width);
    void setHeight(int height);

  private:
    int width = 0;
    int height = 0;
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_RECTANGLE_HPP
