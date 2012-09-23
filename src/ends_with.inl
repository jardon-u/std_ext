namespace ext
{
  inline bool ends_with(const std::string& str, const std::string& ending)
  {
    if (str.length() >= ending.length())
    {
      int cmp = str.compare(str.length() - ending.length(),
                            ending.length(), ending);
      return (0 == cmp);
    }
    return false;
  }
}
