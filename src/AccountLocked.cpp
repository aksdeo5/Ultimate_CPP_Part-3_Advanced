#include "AccountLocked.hpp"

namespace aksdeo5::ultimate_cpp_advanced
{
  const char *AccountLocked::what() const noexcept
  {
    return "Your account is locked! Contact the admin.";
  }

} // namespace aksdeo5::ultimate_cpp_advanced
