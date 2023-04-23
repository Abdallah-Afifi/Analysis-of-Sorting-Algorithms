#include "SortTester.h"
#include "SortingAlgorithm.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <chrono>
#include <iomanip>

void SortTester::TestSortingAlgorithm(SortingAlgorithm* algorithm, std::vector<int>& vec, int size) {
    auto start_time = std::chrono::high_resolution_clock::now();
    algorithm->Sort(vec);
    algorithm->Model(size);
    auto end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, std::milli> elapsed_time = end_time - start_time;
    std::cout << algorithm->GetName();
        
    //checking if the vector is sorted before printing
    if (is_sorted(vec.begin(), vec.end())) {
        std::cout << " (Sorted)";
    }
    else {
        std::cout << " (Not Sorted)";
    }

    std::cout << " with size " << size << ": "
        << algorithm->GetComparisons() << " Comparisons, "
        << algorithm->GetModel() << " Model Expected, "
        << algorithm->GetSwaps() << " Swaps, "
        << elapsed_time.count() << " ms Elapsed"
        << std::endl;
}
