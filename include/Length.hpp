#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_LENGTH_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_LENGTH_HPP

#include <compare>
#include <ostream>
#include <istream>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  class Length
  {
  public:
    explicit Length(int value);
    Length() = default;

    int getValue() const;
    void setValue(int value);

    // Overloading the Equality-operator (==)
    // Overloading this operator implicitly overloads corrosponding Inequality-operator (!=)
    bool operator==(const Length &other) const;
    bool operator==(int other) const;

    // Overloading the Spaceship-operator (<=>)
    // Overloading this operator implicitly overloads all comparison operators (<, <=, >,>=)
    std::strong_ordering operator<=>(const Length &other) const;

  private:
    int value = 0;
  };

  /*
    It's best practice to add the Stream-operator overloads in the same namespace
    enclosing the corrosponding class
  */
  ostream &operator<<(ostream &cout, const Length &length);
  istream &operator>>(istream &cin, Length &length);

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_LENGTH_HPP
