#pragma once
#include "iostream"
#include "string"

template <typename T> void swap(T &a, T&b)
{
	T c = a;
	a = b;
	b = c;
}


template <typename T> T min(T &a, T &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T> T max(T &a, T &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
