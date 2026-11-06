#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_TEXTBOX_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_TEXTBOX_HPP

#include "Widget.hpp"

#include <string>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  // Class TextBox inhertits/extends class Widget
  class TextBox : public Widget
  {
  public:
    string getValue() const;
    void setValue(const string &value);

  private:
    string value;
  };
} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_TEXTBOX_HPP
