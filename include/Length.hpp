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
    Length() = default;
    explicit Length(int value);

    // Explicitly adding the Copy-constructor
    // It's best practice to add the Copy-constructor while addind the Assignment-operator overload
    Length(const Length &other);

    // Overloading the Equality-operator (==)
    // Overloading this operator implicitly overloads corrosponding Inequality-operator (!=)
    bool operator==(const Length &other) const;
    bool operator==(int other) const;

    // Overloading the Spaceship-operator (<=>)
    // Overloading this operator implicitly overloads all comparison operators (<, <=, >,>=)
    std::strong_ordering operator<=>(const Length &other) const;

    // Overloading the Arithmetic operators
    Length operator+(const Length &other) const;
    Length operator-(const Length &other) const;
    Length operator*(const Length &other) const;
    Length operator/(const Length &other) const;
    Length operator%(const Length &other) const;

    // It's best practice to overload the Compound-assignment operators for the specific Arithmetic operators
    Length &operator+=(const Length &other);
    Length &operator-=(const Length &other);
    Length &operator*=(const Length &other);
    Length &operator/=(const Length &other);
    Length &operator%=(const Length &other);

    // Overloading the Assignment-operator
    Length &operator=(const Length &other);

  private:
    int value = 0;
    /*
      If you declare a friend function inside a class without any forward declaration outside the class,
      C++ treats it as if it belongs to the enclosing namespace of that class.

      It is best practice to keep friend functions inside the enclosing namespace of the class.
    */
    friend ostream &operator<<(ostream &cout, const Length &length);
    friend istream &operator>>(istream &cin, Length &length);
  };

  // Forward declarations of friend functions from the enclosing namespace is optional
  ostream &operator<<(ostream &cout, const Length &length);
  istream &operator>>(istream &cin, Length &length);

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_LENGTH_HPP
