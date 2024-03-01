module;
#include <format>
export module project.foo:bar;

export namespace foo
{
	class bar
	{
		friend struct std::formatter<bar>;
		int quux;

	 public:
		bar();
		explicit bar(int quux);
		[[nodiscard]] int get_quux() const;
		friend std::ostream& operator<<(std::ostream& os, const bar& b);
	};
}

template<>
struct std::formatter<foo::bar> {
	bool pretty = false;
	bool hex = false;

	template<class ParseContext>
	constexpr typename ParseContext::iterator parse(ParseContext& ctx) {
		auto it = ctx.begin();
		if (it == ctx.end())
			return it;

		if(*it == '#')
		{
			pretty = true;
			++it;
		}
		if (*it == 'x' || *it == 'X')
		{
			hex = true;
			++it;
		}

		if (*it != '}')
			throw std::format_error("invalid format args for foo::bar.");

		return it;
	}

	template<class FormatContext>
	typename FormatContext::iterator format(const foo::bar& foo, FormatContext& ctx) const {
		if (hex)
		{
			if (pretty)
			{
				return std::format_to(ctx.out(), "FOO::QUUX: 0x{:x}", foo.quux);
			}
			return std::format_to(ctx.out(), "FOO::QUUX: {:x}", foo.quux);
		}

		return std::format_to(ctx.out(), "FOO::QUUX: {}", foo.quux);
	}
};