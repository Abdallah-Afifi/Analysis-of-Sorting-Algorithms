#include "SortTester.h"
#include "SortingAlgorithm.h"
#include "RandomPermutationVectorGenerator.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <chrono>
#include <fstream>
#include <iomanip>




void SortTester::TestSortingAlgorithm(SortingAlgorithm* algorithm, std::vector<int>& vec, int size, int j) {
    auto start_time = std::chrono::high_resolution_clock::now();
    algorithm->Sort(vec);
    auto end_time = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, std::milli> elapsed_time = end_time - start_time;

    algorithm->Model(size);

    std::ofstream outputFile;
    outputFile.open("Output.txt", std::ios::app);

    outputFile << std::left << "[" << j << "] " <<  algorithm->GetName() << std::endl;


    outputFile << std::setw(5) << std::left << RandomPermutationVectorGenerator::GetEntropy(vec) << " Vector's Entropy, ";

    //checking if the vector is sorted before printing
    if (is_sorted(vec.begin(), vec.end())) {
        outputFile << " (Sorted)";
    }
    else {
        outputFile << " (Not Sorted)";
    }

    outputFile << " with size " << std::setw(5) << std::left << size << ": "
        << std::setw(5) << std::left << algorithm->GetComparisons() << " Comparisons, "
        << std::setw(5) << std::left << algorithm->GetModel() << " Model Expected, "
        << std::setw(5) << std::left << algorithm->GetSwaps() << " Swaps, "
        << std::setw(5) << std::left << elapsed_time.count() << " ms Elapsed"
        << std::endl
        << std::endl;

    outputFile.close();
}

