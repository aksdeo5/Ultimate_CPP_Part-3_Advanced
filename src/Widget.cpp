#include "Widget.hpp"

namespace aksdeo5::ultimate_cpp_advanced
{
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
