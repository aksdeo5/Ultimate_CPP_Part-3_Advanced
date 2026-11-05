#include "Person.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

void show_person(Person person)
{
}

int main()
{
    Person person{33};
    show_person(person);

#if 0
    // Implicit conversion happens in case of single-argument-constructor
    // The 'explicit' keyword prevents this behaviour
    show_person(33);
#endif

    return 0;
}
