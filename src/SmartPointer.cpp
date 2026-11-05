#include "SmartPointer.hpp"

namespace aksdeo5::ultimate_cpp_advanced
{
  SmartPointer::SmartPointer(int *ptr) : ptr{ptr}
  {
  }

  SmartPointer::~SmartPointer()
  {
    delete ptr;
    ptr = nullptr;
  }
} // namespace aksdeo5::ultimate_cpp_advanced
