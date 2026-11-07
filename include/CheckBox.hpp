#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_CHECKBOX_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_CHECKBOX_HPP

#include "Widget.hpp"

namespace aksdeo5::ultimate_cpp_advanced
{
  class CheckBox : public Widget
  {
  public:
    ~CheckBox();

    void draw() const override;
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_CHECKBOX_HPP
