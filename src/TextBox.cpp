#include "TextBox.hpp"

namespace aksdeo5::ultimate_cpp_advanced
{
  string TextBox::getValue() const
  {
    return value;
  }

  void TextBox::setValue(const string &value)
  {
    this->value = value;
  }

} // namespace aksdeo5::ultimate_cpp_advanced
