#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_TEXTBOX_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_TEXTBOX_HPP

#include "Widget.hpp"

#include <string>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  // Declaring a class as final
  // We cannot further inherit/extend a final class
  class TextBox final : public Widget
  {
  public:
    ~TextBox();

    // Declaring a method as final
    // We cannot further override it in derived classes
    void draw() const override final;

    string getValue() const;
    void setValue(const string &value);

  private:
    string value;
  };
} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_TEXTBOX_HPP
