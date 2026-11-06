#include "Point.hpp"

namespace aksdeo5::ultimate_cpp_advanced
{
  Point::Point(int x, int y) : x{x}, y{y}
  {
  }

  int Point::getX() const
  {
    return x;
  }

  int Point::getY() const
  {
    return y;
  }

  bool Point::operator==(const Point &other) const
  {
    return x == other.x && y == other.y;
  }

  ostream &operator<<(ostream &cout, const Point &point)
  {
    return cout << "(" << point.getX() << ", " << point.getY() << ")";
  }

} // namespace aksdeo5::ultimate_cpp_advanced
