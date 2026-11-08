#include "DateTime.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
  DateTime dateTime{2026, 11, 8, 10, 25, 44};

  cout << "Year: " << dateTime.getYear() << endl;
  cout << "Month: " << dateTime.getMonth() << endl;
  cout << "Day: " << dateTime.getDay() << endl;
  cout << "Hour: " << dateTime.getHour() << endl;
  cout << "Minute: " << dateTime.getMinute() << endl;
  cout << "Second: " << dateTime.getSecond() << endl;

  return 0;
}
