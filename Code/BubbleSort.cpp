#include "BubbleSort.h"
#include "SortingAlgorithm.h"
#include <vector>
#include <string>

BubbleSort::BubbleSort() : SortingAlgorithm("Bubble Sort") {}

void BubbleSort::Sort(std::vector<int>& vec) {
    int size = vec.size();
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-i-1; j++) {
            comparisons++;
            if (vec[j] > vec[j+1]) {
                std::swap(vec[j], vec[j+1]);
                swaps++;
            }
        }
    }
}
