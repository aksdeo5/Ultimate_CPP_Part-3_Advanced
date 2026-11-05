#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_RECTANGLE_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_RECTANGLE_HPP

namespace aksdeo5::ultimate_cpp_advanced
{
  class Rectangle
  {
  public:
    void draw();
    int getArea();

  private:
    int width;
    int height;
  };
} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_RECTANGLE_HPP
