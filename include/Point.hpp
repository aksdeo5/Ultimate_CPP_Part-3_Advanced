#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_POINT_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_POINT_HPP

#include <ostream>

using namespace std;

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

    int getX() const;
    int getY() const;

    bool operator==(const Point &other) const;
  };

  ostream &operator<<(ostream &cout, const Point &point);

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_POINT_HPP
