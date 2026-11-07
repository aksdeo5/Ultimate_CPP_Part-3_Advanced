#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_WIDGET_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_WIDGET_HPP

namespace aksdeo5::ultimate_cpp_advanced
{
  class Widget
  {
  public:
    // If a class contains at least one virtual method, it must have a virtual destructor
    // Ensuring destructors are called appropriately in case of polymorphism
    virtual ~Widget() = default;

    // Pure-Virtual method
    // Makes the class abstract
    virtual void draw() const = 0;

    void enable();
    void disable();
    bool isEnabled();

  private:
    bool enabled = true;
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_WIDGET_HPP
