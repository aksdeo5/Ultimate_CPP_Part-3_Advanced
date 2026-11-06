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

  std::strong_ordering Length::operator<=>(const Length &other) const
  {
    return value <=> other.value;
  }
} // namespace aksdeo5::ultimate_cpp_advanced
