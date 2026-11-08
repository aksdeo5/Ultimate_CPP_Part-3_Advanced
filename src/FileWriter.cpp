#include "FileWriter.hpp"

#include <iostream>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  FileWriter::FileWriter(string fileName)
  {
    cout << "Constructor of FileWriter" << endl;
  }

  void FileWriter::write()
  {
    cout << "File content" << endl;
  }

  string FileWriter::fileName()
  {
    return "fileName";
  }

} // namespace aksdeo5::ultimate_cpp_advanced
