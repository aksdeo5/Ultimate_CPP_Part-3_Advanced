#include "Widget.hpp"
#include "TextBox.hpp"
#include "CheckBox.hpp"

#include <iostream>
#include <vector>
#include <memory>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
  // Polymorphic Collections
  vector<unique_ptr<Widget>> widgets;
  widgets.push_back(make_unique<TextBox>());
  widgets.push_back(make_unique<CheckBox>());

  for (const auto &widget : widgets)
    widget->draw();

  return 0;
}
