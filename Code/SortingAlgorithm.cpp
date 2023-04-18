#include "SortingAlgorithm.h"
#include <string>

SortingAlgorithm::SortingAlgorithm(string Name) {
    name = Name;
    comparisons = 0;
    swaps = 0;
}

int SortingAlgorithm::GetComparisons() {
    return comparisons;
}

int SortingAlgorithm::GetSwaps() {
    return swaps;
}

string SortingAlgorithm::GetName() {
    return name;
}
