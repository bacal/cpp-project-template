export module project.foo:bar;

import <ostream>;

export namespace foo
{
	class bar
	{
	 private:
		int quux;

	 public:
		bar();
		bar(int quux);
		int get_quux();
		friend std::ostream& operator<<(std::ostream& os, const bar& b);
	};

}


