#include "CheckBox.hpp"

#include <iostream>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  CheckBox::~CheckBox()
  {
    cout << "CheckBox destructed" << endl;
  }

  void CheckBox::draw() const
  {
    cout << "Drawing a CheckBox" << endl;
  }

} // namespace aksdeo5::ultimate_cpp_advanced
