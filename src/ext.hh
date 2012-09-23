#ifndef _EXT_HH
# define _EXT_HH

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <iterator>
# include <string>
# include <list>
# include <vector>
# include <fstream>
# include <sstream>


namespace ext
{
  bool        ends_with(const std::string& str, const std::string& ending);

  std::string read_file(const std::string& fn);

  template <typename T>
  T s_unique(T& v);

  template <typename ...T>
  std::list<std::tuple<T...>> zip(std::list<T>... lst);

  template <typename T, typename ...Args>
  void println(const T& value, const Args&... args);
}

#endif /* _EXT_HH */
