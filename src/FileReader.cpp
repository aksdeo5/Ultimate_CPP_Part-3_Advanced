#include "FileReader.hpp"

#include <iostream>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  FileReader::FileReader(string fileName)
  {
    cout << "Constructor of FileReader" << endl;
  }

  string FileReader::read()
  {
    return "File content";
  }

  string FileReader::fileName()
  {
    return "fileName";
  }

  // Implementations for FileReader goes here
} // namespace aksdeo5::ultimate_cpp_advanced
