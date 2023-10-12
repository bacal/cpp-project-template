#include <iostream>
#include "bar.hpp"
int main(int argc, char **argv){
  foo::bar b(32);
  std::cout << b << '\n';
  return 0;
}
