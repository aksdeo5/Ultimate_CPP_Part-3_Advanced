#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_POINT_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_POINT_HPP

namespace aksdeo5::ultimate_cpp_advanced
{
  class Point
  {
  private:
    int x = 0;
    int y = 0;

  public:
    Point() = default;
    Point(int x, int y);

    bool operator==(const Point &other) const;
  };
} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_POINT_HPP
