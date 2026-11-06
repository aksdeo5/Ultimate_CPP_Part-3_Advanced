#include "Widget.hpp"

#include <iostream>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  Widget::Widget(bool enabled) : enabled{enabled}
  {
    cout << "Widget constructed" << endl;
  }

  void Widget::enable()
  {
    enabled = true;
  }

  void Widget::disable()
  {
    enabled = false;
  }

  bool Widget::isEnabled()
  {
    return enabled;
  }

} // namespace aksdeo5::ultimate_cpp_advanced
