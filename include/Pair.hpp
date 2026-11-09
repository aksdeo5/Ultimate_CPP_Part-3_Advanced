#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_PAIR_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_PAIR_HPP

namespace aksdeo5::ultimate_cpp_advanced
{
  // Class Template
  template <typename K, typename V>
  class Pair
  {
  public:
    Pair(K key, V value);

    K getKey();
    V getValue();

  private:
    K key;
    V value;
  };

  // Defining member functions of the class template
  // Members functions of a class template must be defined in the same header file
  // It's best practice to make member functions of a class template inline
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

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_PAIR_HPP
