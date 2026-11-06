#include "Length.hpp"

#include <compare>

namespace aksdeo5::ultimate_cpp_advanced
{
  Length::Length(int value) : value{value}
  {
  }

  bool Length::operator==(const Length &other) const
  {
    return value == other.value;
  }

  bool Length::operator==(int other) const
  {
    return value == other;
  }

  Length Length::operator+(const Length &other) const
  {
    return Length(value + other.value);
  }

  Length Length::operator-(const Length &other) const
  {
    return Length(value - other.value);
  }

  Length Length::operator*(const Length &other) const
  {
    return Length(value * other.value);
  }

  Length Length::operator/(const Length &other) const
  {
    return Length(value / other.value);
  }

  Length Length::operator%(const Length &other) const
  {
    return Length(value % other.value);
  }

  std::strong_ordering Length::operator<=>(const Length &other) const
  {
    return value <=> other.value;
  }

  ostream &operator<<(ostream &cout, const Length &length)
  {
    return cout << length.value;
  }

  istream &operator>>(istream &cin, Length &length)
  {
    return cin >> length.value;
  }

} // namespace aksdeo5::ultimate_cpp_advanced
