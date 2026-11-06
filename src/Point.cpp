#include "Point.hpp"

namespace aksdeo5::ultimate_cpp_advanced
{
  Point::Point(int x, int y) : x{x}, y{y}
  {
  }

  bool Point::operator==(const Point &other) const
  {
    return x == other.x && y == other.y;
  }
} // namespace aksdeo5::ultimate_cpp_advanced
