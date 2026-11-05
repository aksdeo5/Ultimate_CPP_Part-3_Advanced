#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_RECTANGLE_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_RECTANGLE_HPP

namespace aksdeo5::ultimate_cpp_advanced
{
  class Rectangle
  {
  public:
    void draw();
    int getArea();

    // Getters/Accessors
    int getWidth() const;
    int getHeight() const;

    // Setters/Mutators
    void setWidth(int width);
    void setHeight(int height);

  private:
    int width;
    int height;
  };
} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_RECTANGLE_HPP
