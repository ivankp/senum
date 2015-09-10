#include "senum.hh"

senum(numbers,(one)(two)(three))

#ifndef senum_pp_test
int main(int argc, char **argv)
{
  std::cout << numbers::get_str(numbers::one)   << ' ';
  std::cout << numbers::get_str(numbers::two)   << ' ';
  std::cout << numbers::get_str(numbers::three) << std::endl;

  std::cout << numbers::get_str(numbers::get_enum("one"))   << ' ';
  std::cout << numbers::get_str(numbers::get_enum("two"))   << ' ';
  std::cout << numbers::get_str(numbers::get_enum("three")) << std::endl;

  std::cout << numbers::one   << ' ';
  std::cout << numbers::two   << ' ';
  std::cout << numbers::three << std::endl;

  return 0;
}
#endif
