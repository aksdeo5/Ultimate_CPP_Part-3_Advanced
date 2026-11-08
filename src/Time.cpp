#include "Time.hpp"

#include <stdexcept>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  Time::Time(int hour, int minute, int second)
  {
    if (hour < 0 && hour > 23)
      throw invalid_argument("hour");
    if (minute < 0 && minute > 59)
      throw invalid_argument("minute");
    if (second < 0 && second > 59)
      throw invalid_argument("second");

    this->hour = hour;
    this->minute = minute;
    this->second = second;
  }

  int Time::getHour()
  {
    return hour;
  }

  int Time::getMinute()
  {
    return minute;
  }

  int Time::getSecond()
  {
    return second;
  }

} // namespace aksdeo5::ultimate_cpp_advanced
