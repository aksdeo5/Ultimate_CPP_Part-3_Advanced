#include "Length.hpp"

#include <iostream>
#include <compare>

namespace aksdeo5::ultimate_cpp_advanced
{
  Length::Length(int value) : value{value}
  {
  }

  Length::Length(const Length &other) : value{other.value}
  {
    cout << "Object intialized as a copy of another object" << endl;
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

  Length &Length::operator+=(const Length &other)
  {
    value += other.value;
    return *this;
  }

  Length &Length::operator-=(const Length &other)
  {
    value -= other.value;
    return *this;
  }

  Length &Length::operator*=(const Length &other)
  {
    value *= other.value;
    return *this;
  }

  Length &Length::operator/=(const Length &other)
  {
    value /= other.value;
    return *this;
  }

  Length &Length::operator%=(const Length &other)
  {
    value %= other.value;
    return *this;
  }

  Length &Length::operator=(const Length &other)
  {
    cout << "Object copied by assignment to another object" << endl;
    value = other.value;
    return *this;
  }

  Length &Length::operator++()
  {
    ++value;
    return *this;
  }

  Length &Length::operator--()
  {
    --value;
    return *this;
  }

  Length Length::operator++(int)
  {
    Length copy = *this;
    value++;
    return copy;
  }

  Length Length::operator--(int)
  {
    Length copy = *this;
    value--;
    return copy;
  }

  Length::operator int() const
  {
    return value;
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
