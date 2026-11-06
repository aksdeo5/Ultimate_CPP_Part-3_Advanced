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

  int &SmartPointer::operator*() const
  {
    return *ptr;
  }

} // namespace aksdeo5::ultimate_cpp_advanced
