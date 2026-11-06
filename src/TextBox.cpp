#include "TextBox.hpp"
#include "Widget.hpp"

#include <string>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  TextBox::TextBox(bool enabled, const string &value) : Widget(enabled), value{value}
  {
  }

  string TextBox::getValue() const
  {
    return value;
  }

  void TextBox::setValue(const string &value)
  {
    this->value = value;
  }

} // namespace aksdeo5::ultimate_cpp_advanced
