#include "FileIO.hpp"

#include <iostream>

using namespace std;
using namespace aksdeo5::ultimate_cpp_advanced;

int main()
{
  FileIO fileIO{"fileName"};

  // Accessing individual members of both base classes
  cout << fileIO.read() << endl;
  fileIO.write();

  // Accessing a common member by referencing the specific base class
  cout << fileIO.FileReader::fileName() << endl;

  return 0;
}
