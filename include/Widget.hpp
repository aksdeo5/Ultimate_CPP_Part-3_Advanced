#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_WIDGET_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_WIDGET_HPP

namespace aksdeo5::ultimate_cpp_advanced
{
  class Widget
  {
  public:
    // Virtual method
    // Enforces dynamic-binding
    virtual void draw() const;
    void enable();
    void disable();
    bool isEnabled();

  private:
    bool enabled = true;
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_WIDGET_HPP
