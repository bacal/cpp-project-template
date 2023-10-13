export module project.baz:fizz;

export namespace baz{
	template<typename T>
	class fizz
	{
	 private:
		T data;
	 public:
		explicit fizz<T>(T data);
		void set_data(T data);
		T get_data();
	};
}