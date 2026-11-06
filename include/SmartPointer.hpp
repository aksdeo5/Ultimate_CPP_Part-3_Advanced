#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_SMARTPOINTER_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_SMARTPOINTER_HPP

namespace aksdeo5::ultimate_cpp_advanced
{
  class SmartPointer
  {
  public:
    explicit SmartPointer(int *ptr);
    ~SmartPointer();

    int &operator*() const;

  private:
    int *ptr = nullptr;
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_SMARTPOINTER_HPP
