#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_PAIR_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_PAIR_HPP

#include <ostream>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  // Class Template
  template <typename K, typename V>
  class Pair
  {
  public:
    // Adding default constructor making a dynamic array of the class possible
    Pair() = default;

    Pair(K key, V value);

    K getKey();
    V getValue();

  private:
    K key;
    V value;

    // Making a free-function-template friend of the class
    // Making sure type-parameters of the free-function-template doesn't shadow those of the enclosing class-template
    template <typename K_, typename V_>
    friend ostream &operator<<(ostream &cout, const Pair<K_, V_> &pair);
  };

  // Defining member-functions of the class-template
  // Members-functions of a class-template must be defined in the same header file
  // It's best practice to make member-functions of a class-template inline
  template <typename K, typename V>
  inline Pair<K, V>::Pair(K key, V value) : key{key}, value{value}
  {
  }

  template <typename K, typename V>
  inline K Pair<K, V>::getKey()
  {
    return key;
  }

  template <typename K, typename V>
  inline V Pair<K, V>::getValue()
  {
    return value;
  }

  template <typename K_, typename V_>
  inline ostream &operator<<(ostream &cout, const Pair<K_, V_> &pair)
  {
    return cout << pair.key << "=" << pair.value;
  }

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_PAIR_HPP
