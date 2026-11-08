#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_FILEIO_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_FILEIO_HPP

#include "FileReader.hpp"
#include "FileWriter.hpp"

#include <string>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  // Multiple Inheritance
  class FileIO : public FileReader, public FileWriter
  {
  public:
    FileIO(string fileName);
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_FILEIO_HPP
