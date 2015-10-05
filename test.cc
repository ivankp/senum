#include "senum.hh"

senum(numbers,(one)(two)(three))

#ifndef senum_pp_test
int main(int argc, char **argv)
{
  std::cout << numbers::_str(numbers::one)   << ' ';
  std::cout << numbers::_str(numbers::two)   << ' ';
  std::cout << numbers::_str(numbers::three) << std::endl;

  std::cout << numbers::_str(numbers::_enum("one"))   << ' ';
  std::cout << numbers::_str(numbers::_enum("two"))   << ' ';
  std::cout << numbers::_str(numbers::_enum("three")) << std::endl;

  std::cout << numbers::one   << ' ';
  std::cout << numbers::two   << ' ';
  std::cout << numbers::three << std::endl;

  return 0;
}
#endif
