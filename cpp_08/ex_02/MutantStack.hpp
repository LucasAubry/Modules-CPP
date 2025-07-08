#pragma once

# include <iostream>
# include <algorithm>
# include <list>
# include <stack>
# include <deque>


template<typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack() {};
		~MutantStack() {};
		MutantStack(const MutantStack &other) {*this = other; };
		MutantStack &operator=(const MutantStack &other)
		{
			std::stack<T>::operator=(other);
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;//aliace
		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
};


//std::stack<int> s;

//s.push(10);    // Ajoute 10
//s.push(20);    // Ajoute 20

//s.top();       // Accède au sommet → retourne 20

//s.pop();       // Retire le sommet → enlève 20

//s.size();      // Nombre d’éléments → 1

//s.empty();     // Vérifie si la pile est vide → false

