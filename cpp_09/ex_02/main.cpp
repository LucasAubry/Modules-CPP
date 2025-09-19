#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    PmergeMe::run(argc, argv);
    return 0;
}

//liste = [7, 3, 8, 2, 5]
//couples = [(3,7), (2,8), (5,-1)]
//petit   = [2,3]
//grand   = [7,8,5]
//
//grand = [5, 7, 8]
//petit = [2, 3]
//2 -> [2, 5, 7, 8]
//3 -> [2, 3, 5, 7, 8]

/*suite de jacobsthal cest j0 = 0, j1 = 1 et jn = jn-1 + 2 * jn-2
0,1,1,3,5,11,21,43,85
Cette suite donne lordre optimal dans lequel on doit inserer les petits pour minimiser le nombre de comparaison
*/
