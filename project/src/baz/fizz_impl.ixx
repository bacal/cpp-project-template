export module project.baz:fizz_impl;
import :fizz;

export namespace baz{
	template<typename T>
	fizz<T>::fizz(T data)
	:data{data}{}

	template<typename T>
	void fizz<T>::set_data(T data){
		this->data = data;
	}

	template<typename T>
	T fizz<T>::get_data(){
		return this->data;
	}
}
