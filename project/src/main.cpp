import <iostream>;
import project;

int main(int argc, char **argv){
  foo::bar b(32);
  std::cout << b << '\n';

  baz::fizz<int> t(44);
  return 0;
}
