#include "Length.hpp"

#include <compare>

namespace aksdeo5::ultimate_cpp_advanced
{
  Length::Length(int value) : value{value}
  {
  }

  int Length::getValue() const
  {
    return value;
  }

  void Length::setValue(int value)
  {
    this->value = value;
  }

  bool Length::operator==(const Length &other) const
  {
    return value == other.value;
  }

  bool Length::operator==(int other) const
  {
    return value == other;
  }

  std::strong_ordering Length::operator<=>(const Length &other) const
  {
    return value <=> other.value;
  }

  ostream &operator<<(ostream &cout, const Length &length)
  {
    return cout << length.getValue();
  }

  istream &operator>>(istream &cin, Length &length)
  {
    int value;
    cin >> value;
    length.setValue(value);
    return cin;
  }

} // namespace aksdeo5::ultimate_cpp_advanced
