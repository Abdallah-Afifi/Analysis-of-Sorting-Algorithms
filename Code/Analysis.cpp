#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include "BubbleSort.h"
#include "CountingSort.h"
#include "HeapSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSortFirstPivot.h"
#include "QuickSortMedianPivot.h"
#include "QuickSortRandomPivot.h"
#include "RandomPermutationVectorGenerator.h"
#include "SelectionSort.h"
#include "ShellSort.h"
#include "SortTester.h"
#include "SortingAlgorithm.h"
#include "TreeSort.h"





int main() {
    const int numTests = 10;
    int testSizes[numTests] = { 1000, 2000, 3000, 5000, 7000, 10000, 13000, 16000, 20000, 24000 };

    // Create instances of sorting algorithms to be tested
    std::vector<SortingAlgorithm*> sortingAlgorithms;
    sortingAlgorithms.push_back(new SelectionSort());
    sortingAlgorithms.push_back(new InsertionSort());
    sortingAlgorithms.push_back(new MergeSort());
    sortingAlgorithms.push_back(new QuickSortFirstPivot());
    sortingAlgorithms.push_back(new QuickSortRandomPivot());
    sortingAlgorithms.push_back(new QuickSortMedianPivot());
    sortingAlgorithms.push_back(new BubbleSort());
    sortingAlgorithms.push_back(new CountingSort());
    sortingAlgorithms.push_back(new HeapSort());
    sortingAlgorithms.push_back(new TreeSort());
    sortingAlgorithms.push_back(new ShellSort());

    // Create instance of array generator
    RandomPermutationVectorGenerator vecGenerator;

    // Create instance of sort tester
    SortTester sortTester;

    // Test each sorting algorithm with various array sizes
    for (int i = 0; i < numTests; i++) {
        int vectorSize = testSizes[i];
        std::vector<std::vector<int>> vectors;

        // Generate a new vector for each sorting algorithm
        for (int j = 0; j < sortingAlgorithms.size(); j++) {
            vectors.push_back(vecGenerator.GenerateVector(vectorSize));
        }

        std::ofstream outputFile;
        outputFile.open("Output.txt", std::ios::app);

        outputFile << "Testing with array size " << vectorSize << ":" << std::endl << std::endl;

        outputFile.close();

        // Test each sorting algorithm with its own generated vector
        for (int j = 0; j < sortingAlgorithms.size(); j++) {
            sortTester.TestSortingAlgorithm(sortingAlgorithms[j], vectors[j], vectorSize, j+1);
        }

        outputFile.open("Output.txt", std::ios::app);

        outputFile << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << std::endl << std::endl;

        outputFile.close();
    }

    // Free allocated memory
    for (int i = 0; i < sortingAlgorithms.size(); i++) {
        delete sortingAlgorithms[i];
    }

    std::cout << std::endl << "The Analysis program worked successfully" << std::endl << "You can find the output of the program in the file Output.txt" << std::endl;

    return 0;
}
