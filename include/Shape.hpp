#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_SHAPE_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_SHAPE_HPP

#include <string>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  class Shape
  {
  public:
    string getBackground() const;
    void setBackground(string background);

  private:
    string background;
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_SHAPE_HPP
