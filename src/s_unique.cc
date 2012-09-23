#include "ext.hh"

namespace ext
{
  /// Sorted unique
  template <typename T>
  T s_unique(T& v)
  {
    T out;

    std::sort(v.begin(), v.end());
    typename T::iterator last = std::unique(v.begin(),v.end());

    out.resize(last - v.begin());
    std::copy(v.begin(), last, out.begin());

    return out;
  }
}
