#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_RECTANGLE_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_RECTANGLE_HPP

#include <string>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  class Rectangle
  {
  public:
    void draw();
    int getArea();

    Rectangle() = default;

    // Explicitly added Copy-construtctor
    Rectangle(const Rectangle &source);
#if 0
    // Deleting the implicit Copy-construtctor
    Rectangle(const Rectangle &source) = delete;
#endif

    Rectangle(int width, int height);
    Rectangle(int width, int height, const string &color);

    // Getters/Accessors
    int getWidth() const;
    int getHeight() const;

    // Setters/Mutators
    void setWidth(int width);
    void setHeight(int height);

  private:
    int width = 0;
    int height = 0;
    string color;
  };
} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_RECTANGLE_HPP
