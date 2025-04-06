#pragma once

template <class T>
class Array
{
	private :
		T *_tab;
		unsigned int _size
	public :
		Array();
		Array(unsigned int n);
		Array(const Array & other);
		Array &operator=(const Array& other);
		~Array();
}
