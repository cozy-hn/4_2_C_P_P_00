#include "PmergeMe.hpp"
#include <ctime>

void initSetting(int argc, char **argv) {
    PmergeMe& pm = PmergeMe::getInstance();

    for (int i = 1; i < argc; i++) {
        for (char *c = argv[i]; *c; c++)
            if (!isdigit(*c))
                throw std::exception();
        int n = std::atoi(argv[i]);
        if (n < 1)
            throw std::exception();
        pm.pushBack(n);
    }
}

int main(int argc, char **argv) {
    try {
        if (argc < 2)
            throw std::exception();
        initSetting(argc, argv);
    } catch (std::exception &e) {
        std::cerr << "Error" << std::endl;
        std::exit(1);
    }

    PmergeMe& pm = PmergeMe::getInstance();
    pm.printAll("Before: ");

    clock_t startVec = clock();
    pm.sortVector();
    clock_t endVec = clock();
    double timeVec = static_cast<double>(endVec - startVec);

    clock_t startList = clock();
    pm.sortList();
    clock_t endList = clock();
    double timeList = static_cast<double>(endList - startList);

    pm.printAll("After: ");
    std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << timeVec << " us" << std::endl;
    std::cout << "Time to process a range of " << argc - 1 << " elements with std::list : " << timeList << " us" << std::endl;
    
    if (pm.getVCount() != pm.getLCount()) {
        std::cerr << "Error: vector and list count is different" << std::endl;
        std::exit(1);
    }
    std::exit(0);
}