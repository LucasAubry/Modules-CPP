#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& other) { (void)other; }
PmergeMe& PmergeMe::operator=(const PmergeMe& other) { (void)other; return *this; }
PmergeMe::~PmergeMe() {}

void PmergeMe::run(int argc, char **argv)
{
    if (argc < 2)
	{
        std::cerr << "Error: not enough arguments" << std::endl;
        return;
    }

    std::vector<int> vec;
    std::deque<int> deq;

    for (int i = 1; i < argc; i++)
	{
        int num = atoi(argv[i]);
        if (num <= 0)
		{
            std::cerr << "Error" << std::endl;
            return;
        }
        vec.push_back(num);
        deq.push_back(num);
    }

    std::cout << "Before: ";
    for (size_t i = 0; i < vec.size(); i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    clock_t start_vec = clock();
    ford_fiesta(vec);
    clock_t end_vec = clock();

    clock_t start_deq = clock();
    ford_fiesta(deq);
    clock_t end_deq = clock();

    std::cout << "After:  ";
    for (size_t i = 0; i < vec.size(); i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    double time_vec = ((double)(end_vec - start_vec)) / CLOCKS_PER_SEC * 1000000;
    double time_deq = ((double)(end_deq - start_deq)) / CLOCKS_PER_SEC * 1000000;

    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << time_vec << " us" << std::endl;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque  : " << time_deq << " us" << std::endl;
}
