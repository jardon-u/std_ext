#include <ext>

int main()
{
  std::string a = "abcde";
  std::cout << ext::ends_with(a, "de") << std::endl;
  std::cout << ext::ends_with(a, "ed") << std::endl;

  std::vector<int> v = {1,2,3,2,3,1};
  for (auto e : ext::s_unique(v))
    std::cout << e << ",";
  std::cout << std::endl;

  std::string s = "Walking on the moon";
  for (auto w : ext::split(s))
    std::cout << w << ",";
  std::cout << std::endl;

  std::string ss = "I CaN HAz LowA CAze";
  std::cout << ext::to_lower(ss) << std::endl;

  std::list<int> v1 = {1,2,3};
  std::list<std::string> v2 = {"1","2","3"};
  auto zipv = ext::zip(v1,v2);
  for (auto e : zipv)
    std::cout << std::get<0>(e) << std::get<1>(e) << ",";
  std::cout << std::endl;
}
