#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_DATETIME_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_DATETIME_HPP

#include "Date.hpp"
#include "Time.hpp"

namespace aksdeo5::ultimate_cpp_advanced
{
  class DateTime : public Date, public Time
  {
  public:
    DateTime(int year, int month, int day, int hour, int minute, int second);
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_DATETIME_HPP
