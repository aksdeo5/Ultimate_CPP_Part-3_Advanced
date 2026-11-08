#include "FileIO.hpp"

#include <iostream>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  FileIO::FileIO(string fileName) : FileReader{fileName}, FileWriter{fileName}
  {
    cout << "Constructor of FileIO" << endl;
  }

  // Implementations for FileIO goes here
} // namespace aksdeo5::ultimate_cpp_advanced
