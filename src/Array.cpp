#include "Array.hpp"
#include <stdexcept>

namespace aksdeo5::ultimate_cpp_advanced
{
  Array::Array(size_t size) : size{size}, array{new int[size]}
  {
  }

  Array::~Array()
  {
    delete[] array;
    array = nullptr;
  }

  int &Array::operator[](size_t index)
  {
    if (index >= size)
      throw std::invalid_argument("index");

    return array[index];
  }

} // namespace aksdeo5::ultimate_cpp_advanced
