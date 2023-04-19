#include "SortTester.h"
#include "SortingAlgorithm.h"
#include <iostream>
#include <vector>
#include <chrono>

void SortTester::TestSortingAlgorithm(SortingAlgorithm* algorithm, std::vector<int>& vec, int size) {
    auto start_time = std::chrono::high_resolution_clock::now();
    algorithm->Sort(vec);
    auto end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, std::milli> elapsed_time = end_time - start_time;
    std::cout << algorithm->GetName();
        
    //checking if the vector is sorted before printing
    if (std::is_sorted(vec.begin(), vec.end())) {
        std::cout << " (sorted)";
    } else {
        std::cout << " (not sorted)";
    }

    std::cout << " with size " << size << ": " 
         << algorithm->GetComparisons() << " comparisons, "
         << algorithm->GetSwaps() << " swaps, " 
         << elapsed_time.count() << " ms elapsed" 
         << std::endl;
}
