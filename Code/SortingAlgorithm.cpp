#include "SortingAlgorithm.h"
#include <string>

SortingAlgorithm::SortingAlgorithm(string name) {
    Name = name;
    Comparisons = 0;
    Swaps = 0;
}

int SortingAlgorithm::GetComparisons() {
    return Comparisons;
}

int SortingAlgorithm::GetSwaps() {
    return Swaps;
}

string SortingAlgorithm::GetName() {
    return Name;
}
