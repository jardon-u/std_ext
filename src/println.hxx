namespace ext
{
  /// println
  void println() {
    std::cout << std::endl;
  }

  template <typename T, typename ...Args>
  void println(const T& value, const Args&... args)
  {
    std::cout << value << " ";
    println(args...);
  }
}
