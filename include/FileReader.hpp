#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_FILEREADER_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_FILEREADER_HPP

#include <string>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  class FileReader
  {
  public:
    FileReader(string fileName);

    string read();
    string fileName();
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_FILEREADER_HPP
