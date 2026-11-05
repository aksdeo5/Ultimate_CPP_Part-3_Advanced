#include "TextBox.hpp"

namespace aksdeo5::ultimate_cpp_advanced
{
  TextBox::TextBox(const string &value) : value{value}
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
