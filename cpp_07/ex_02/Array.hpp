#pragma once

#include <iostream>
#include <cassert>


template <class T>
class Array
{
	private :
		T *_tab;
		unsigned int _size;

	public :
		Array() : _tab(new T[0]), _size(0) {};
		Array(unsigned int n) : _size(n)
		{
			this->_tab = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
			{
				this->_tab[i] = T();
			}
		}
		Array(const Array & other)
		{
			this->_size = other._size;
			this->_tab = new T[other._size];
			for (unsigned int i = 0; i < other._size; i++)
			{
				this->_tab[i] = other._tab[i];
			}
		};
		Array &operator=(const Array& other)
		{
			if (this != &other)
			{
				delete[] this->_tab;
				this->_size = other._size;
				this->_tab = new T[other._size];

				for (unsigned int i = 0; i < other._size; i++)
				{
					this->_tab[i] = other._tab[i];
				}
			}
			return *this;
		}
		~Array() { std::cout << "~"<<  *this << std::endl; delete[] _tab; };

		unsigned int size() { return _size; };

		T &operator[](unsigned int i) {
			if (i >= _size)
				throw std::runtime_error("array index out of bounds");
			return _tab[i];
		}
};

template <class T>
std::ostream &operator<<(std::ostream &os, Array<T> &arr)
{
	os << "Array(";

	if (arr.size() == 0)
	{
		os << "error no size for Array";
		return (os);
	}

	unsigned int i = 0;
	for (i = 0; i < arr.size()-1; i++) {
		if (i == 10) {
			os << arr.size()-i << " more elements..., ";
			i = arr.size()-1;
			break;
		}
		os << arr[i] << ", ";
	}
	os << arr[i];
	os << ")";
	return (os);
}
