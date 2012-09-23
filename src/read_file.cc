#include "ext.hh"

namespace ext
{
  /// Read a file, return the content as a C++ string
  std::string read_file(const std::string& fn)
  {
    std::ifstream is;
    is.open(fn.c_str(), std::ios::binary);
    if (!is.is_open())
      throw std::runtime_error("File not found: " + fn);

    std::string str((std::istreambuf_iterator<char>(is)),
                     std::istreambuf_iterator<char>());

    return str;
  }
}
