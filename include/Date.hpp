#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_DATE_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_DATE_HPP

namespace aksdeo5::ultimate_cpp_advanced
{
  class Date
  {
  public:
    Date(int year, int month, int day);

    int getYear();
    int getMonth();
    int getDay();

  private:
    int year;
    int month;
    int day;
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_DATE_HPP
