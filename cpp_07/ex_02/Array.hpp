#pragma once

template <class T>
class Array
{
	private :
		T *_array;	
		unsigned int _size;
	public :
		Array() : _array(new T()), _size(0){};
		Array(unsigned int n) : _array(new T[n]), _size(n){};
		Array(Array const &other) : _array(new T[other._size()]), _size(other.size);
		~Array() : { delete[] _array; };
		Array& operator=(const Array& other);
}
