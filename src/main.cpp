#include "Rectangle.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
#if 0
    // Declaring an array of 3 objects (Rectangles)
    // Following declaration only works if the class has default constructor
    Rectangle rectangle[3];

    // Intializing an array of objects using array-intializer-list
    Rectangle rectangle[] = {
        Rectangle(),
        Rectangle(5, 6),
        Rectangle(5, 6, "yellow"),
    };
#endif

  // Intializing an array of objects using object-initalizer-lists in array-intializer-list
  Rectangle rectangle[] = {
      {},
      {5, 6},
      {5, 6, "yellow"},
  };

  return 0;
}
