#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_LENGTH_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_LENGTH_HPP

namespace aksdeo5::ultimate_cpp_advanced
{
  class Length
  {
  public:
    explicit Length(int value);

    // Overloading the Equality-operator
    bool operator==(const Length &other) const;
    bool operator==(int other) const;

    // Explictly overloading the Inequality-operator
    bool operator!=(int other) const;

    // Overloading the Comparison-operators
    bool operator<(const Length &other) const;
    bool operator<=(const Length &other) const;
    bool operator>(const Length &other) const;
    bool operator>=(const Length &other) const;

  private:
    int value = 0;
  };
} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_LENGTH_HPP
