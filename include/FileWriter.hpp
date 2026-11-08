#ifndef AKSDEO5_ULTIMATE_CPP_ADVANCED_FILEWRITER_HPP
#define AKSDEO5_ULTIMATE_CPP_ADVANCED_FILEWRITER_HPP

#include <string>

using namespace std;

namespace aksdeo5::ultimate_cpp_advanced
{
  class FileWriter
  {
  public:
    FileWriter(string fileName);

    void write();
    string fileName();
  };

} // namespace aksdeo5::ultimate_cpp_advanced

#endif // AKSDEO5_ULTIMATE_CPP_ADVANCED_FILEWRITER_HPP
