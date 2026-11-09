#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_ARRAY_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_ARRAY_HPP

#include <cstddef>
#include <stdexcept>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  template <typename T>
  class Array
  {
  public:
    explicit Array(size_t size);
    ~Array();

    T &operator[](size_t index);

  private:
    size_t size;
    T *array = nullptr;
  };

  template <typename T>
  inline Array<T>::Array(size_t size) : array{new T[size]}, size{size}
  {
  }

  template <typename T>
  inline Array<T>::~Array()
  {
    delete[] array;
    array = nullptr;
  }

  template <typename T>
  inline T &Array<T>::operator[](size_t index)
  {
    if (index >= size)
      throw invalid_argument{"Array index out-of-bounds"};

    return array[index];
  }

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_ARRAY_HPP
