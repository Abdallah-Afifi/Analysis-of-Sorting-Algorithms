#include "SortingAlgorithm.h"
#include <string>

SortingAlgorithm::SortingAlgorithm(std::string Name) {
    name = Name;
    comparisons = 0;
    swaps = 0;
    model = 0;
}

int SortingAlgorithm::GetComparisons() {
    return comparisons;
}

int SortingAlgorithm::GetSwaps() {
    return swaps;
}


int SortingAlgorithm::GetModel() {
    return model;
}

std::string SortingAlgorithm::GetName() {
    return name;
}
