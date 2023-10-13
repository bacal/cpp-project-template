export module project.foo:bar_impl;
import :bar;
import <ostream>;

namespace foo{
	bar::bar()
		:quux(0){}
	bar::bar(int quux)
		:quux(quux){}
	int bar::get_quux(){
		return quux;
	}
	std::ostream& operator<<(std::ostream& os, const bar& b){
		os << b.quux;
		return os;
	}
}


