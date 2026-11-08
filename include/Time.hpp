#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_TIME_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_TIME_HPP

namespace aksdeo5::ultimate_cpp_advanced
{
  class Time
  {
  public:
    Time(int hour, int minute, int second);

    int getHour();
    int getMinute();
    int getSecond();

  private:
    int hour;
    int minute;
    int second;
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_TIME_HPP
