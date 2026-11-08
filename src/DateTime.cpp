#include "DateTime.hpp"
#include "Date.hpp"
#include "Time.hpp"

namespace aksdeo5::ultimate_cpp_advanced
{
  DateTime::DateTime(int year, int month, int day, int hour, int minute, int second) : Date(year, month, day), Time(hour, minute, second)
  {
  }

} // namespace aksdeo5::ultimate_cpp_advanced
