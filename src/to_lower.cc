#include "ext.hh"

namespace ext
{
  std::string to_lower(const std::string& s)
  {
    std::string lower_str;
    std::transform(s.begin(), s.end(), lower_str.begin(), ::tolower);
    return lower_str;
  }

  void lower(std::string& s)
  {
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
  }
}
