#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_ACCOUNTLOCKED_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_ACCOUNTLOCKED_HPP

#include <exception>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  // Custom exception
  class AccountLocked : public exception
  {
  public:
    const char *what() const noexcept override;
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_ACCOUNTLOCKED_HPP
