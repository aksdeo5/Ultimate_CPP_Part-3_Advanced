#include "Date.hpp"

#include <stdexcept>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  Date::Date(int year, int month, int day)
  {
    if (year < 1970 && year > 9999)
      throw invalid_argument("year");
    if (month < 1 && month > 12)
      throw invalid_argument("month");
    if (day < 1 && day > 31)
      throw invalid_argument("day");

    this->year = year;
    this->month = month;
    this->day = day;
  }

  int Date::getYear()
  {
    return year;
  }

  int Date::getMonth()
  {
    return month;
  }

  int Date::getDay()
  {
    return day;
  }

} // namespace aksdeo5::ultimate_cpp_advanced
