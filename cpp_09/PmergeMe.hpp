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

        for (size_t i = 0; i < liste.size(); i += 2) {
            if (i + 1 < liste.size()) {
                int a = liste[i];
                int b = liste[i+1];
                if (a > b) std::swap(a, b);
                couples.push_back(std::make_pair(a, b));
                grand.push_back(b);
                insertion_sort(petit, a);
            } else {
                couples.push_back(std::make_pair(liste[i], -1));
                grand.push_back(liste[i]);
            }
        }
        std::sort(grand.begin(), grand.end());

        for (typename Container::iterator it = petit.begin(); it != petit.end(); ++it) {
            typename Container::iterator pos = std::lower_bound(grand.begin(), grand.end(), *it);
            grand.insert(pos, *it);
        }

        liste = grand;
    }
};

#endif

