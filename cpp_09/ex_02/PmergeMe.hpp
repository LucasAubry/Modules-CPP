#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
#include <utility>

class PmergeMe {
public:
	PmergeMe();
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);
	~PmergeMe();

	static void run(int argc, char **argv);

private:
	template <typename Container>
	static void insertion_sort(Container &petit, int num)
	{
		typename Container::iterator it = petit.begin();
		while (it != petit.end() && *it < num)
			it++;
		petit.insert(it, num);
	}

	template <typename Container>
	static void ford_fiesta(Container &liste)
	{
		std::vector<std::pair<int,int> > couples;
		Container grand;
		Container petit;

//creer les couple
		for (size_t i = 0; i < liste.size(); i += 2)
		{
			if (i + 1 < liste.size())
			{
				int a = liste[i];
				int b = liste[i+1];
				if (a > b)
					std::swap(a, b);
				couples.push_back(std::make_pair(a, b));
				grand.push_back(b);
				petit.push_back(a);
			}
			else
			{
				couples.push_back(std::make_pair(liste[i], -1));
				grand.push_back(liste[i]);
			}
		}
//trier les grand
		std::sort(grand.begin(), grand.end());

//generer la suite de Jacobsthal jusqua petit.size()
		std::vector<size_t> jacobsthal;
		jacobsthal.push_back(1);
		jacobsthal.push_back(3);
		while (jacobsthal.back() < petit.size())
			jacobsthal.push_back(jacobsthal[jacobsthal.size()-1] +
								 2 * jacobsthal[jacobsthal.size()-2]);

//cree lindex suivant lordre Jacobsthal
		std::vector<bool> insere(petit.size(), false);
		for (size_t k = 0; k < jacobsthal.size(); ++k)
		{
			size_t index = jacobsthal[k];
			if (index > petit.size()) break;

//inserer cet element
			if (!insere[index-1])//psk petit est indexer a 0 et index a 1
			{
				typename Container::iterator pos =
					std::lower_bound(grand.begin(), grand.end(), petit[index-1]);
				grand.insert(pos, petit[index-1]);
				insere[index-1] = true;
			}
		}
//inserer les petits restants
		for (size_t i = 0; i < petit.size(); ++i)
		{
			if (!insere[i]) {
				typename Container::iterator pos =
					std::lower_bound(grand.begin(), grand.end(), petit[i]);
				grand.insert(pos, petit[i]);
			}
		}
		liste = grand;
	}
};

#endif


/* expliquation du while pour la correction :

Exemple avec petit.size() = 7

La suite de Jacobsthal = 1, 3, 5, 11, 21, …

Tu gardes seulement ceux qui sont ≤ 7 →-> 1, 3, 5

Donc tu vas insérer d’abord petit[0], puis petit[2], puis petit[4]
petit[0, 2, 4] psk ya un decalage de 1 psk les indexe commance a 0
donc en realitr cest petit[1, 3, 5]
*/

