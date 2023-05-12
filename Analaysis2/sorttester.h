#ifndef SORT_TESTER_H
#define SORT_TESTER_H

#include <vector>
#include <string>
#include "SortingAlgorithm.h"

class SortTester {
public:
    static void TestSortingAlgorithm(SortingAlgorithm* algorithm, std::vector<int>& vec, int size);
};

#endif // SORT_TESTER_H
