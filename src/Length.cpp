#include "Length.hpp"

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

  // Implementing the logic in terms of Equality-operator
  bool Length::operator!=(int other) const
  {
    return !operator==(other);
  }
} // namespace aksdeo5::ultimate_cpp_advanced
