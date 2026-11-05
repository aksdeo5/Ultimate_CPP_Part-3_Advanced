#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_PERSON_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_PERSON_HPP

namespace aksdeo5::ultimate_cpp_advanced
{
  class Person
  {
  public:
#if 0
    // Converting constructor
    Person(int age);
#endif

    // The 'explicit' keyword prevents implicit converting behaviour of a single-argument-constructor
    explicit Person(int age);

  private:
    int age;
  };
} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_PERSON_HPP
