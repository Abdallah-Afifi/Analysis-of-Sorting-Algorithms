#include "SortTester.h"
#include "SortingAlgorithm.h"
#include "RandomPermutationVectorGenerator.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <chrono>
#include <fstream>
#include <iomanip>




void SortTester::TestSortingAlgorithm(SortingAlgorithm* algorithm, std::vector<int>& vec, int size) {
    algorithm->Sort(vec);
    algorithm->Model(size);
}
