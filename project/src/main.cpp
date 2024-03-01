#include <print>
import project;

int main(int argc, char **argv){
  const foo::bar b(32);
  std::println("{}",b);
  std::println("{:#x}",b);
  return 0;
}

