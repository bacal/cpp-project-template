module;
#include <ostream>
export module project.foo:bar_impl;
import :bar;

namespace foo{
	bar::bar()
		:quux(0){}
	bar::bar(const int quux)
		:quux(quux){}
	int bar::get_quux() const{
		return quux;
	}
	std::ostream& operator<<(std::ostream& os, const bar& b){
		os << b.quux;
		return os;
	}
}

