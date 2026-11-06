#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_ARRAY_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_ARRAY_HPP

#include <cstddef>

namespace aksdeo5::ultimate_cpp_advanced
{
  class Array
  {
  public:
    Array(size_t size);
    ~Array();

    int &operator[](size_t index);

  private:
    size_t size;
    int *array = nullptr;
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_ARRAY_HPP
