#include <print>
import project;

int main(int argc, char **argv){
  const foo::bar b(32);
  std::println("{}",b);
  std::println("{:#x}",b);


  // const baz::fizz t(44);
  // std::cout << t << '\n';
  return 0;
}

