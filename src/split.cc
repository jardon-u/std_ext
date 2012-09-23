#include "ext.hh"

namespace ext
{
  /// Split a std::string
  inline
  std::vector<std::string> split(const std::string& str)
  {
    std::vector<std::string> tokens;
    std::istringstream iss(str);
    copy(std::istream_iterator<std::string>(iss),
         std::istream_iterator<std::string>(),
         std::back_inserter< std::vector<std::string> >(tokens));
    return tokens;
  }
}
