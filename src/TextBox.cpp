#include "TextBox.hpp"

#include <iostream>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  TextBox::~TextBox()
  {
    cout << "TextBox destructed" << endl;
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
