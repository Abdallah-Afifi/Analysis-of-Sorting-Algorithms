#include "QuickSortRandomPivot.h"
#include "SortingAlgorithm.h"

#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

QuickSortRandomPivot::QuickSortRandomPivot() : SortingAlgorithm("Quick Sort Random Pivot") {}

void QuickSortRandomPivot::Model(int size) {

    model = (size * std::log2(size));
}

QuickSortRandomPivot::~QuickSortRandomPivot() {}

void QuickSortRandomPivot::Sort(std::vector<int>& vec) {
    int size = vec.size();
    QuickSortHelper(vec, 0, size - 1);
}

void QuickSortRandomPivot::QuickSortHelper(std::vector<int>& vec, int left, int right) {
    if (left < right) {
        int pivotIndex = rand() % (right - left + 1) + left;
        pivotIndex = Partition(vec, left, right, pivotIndex);
        QuickSortHelper(vec, left, pivotIndex - 1);
        QuickSortHelper(vec, pivotIndex + 1, right);
    }
}

int QuickSortRandomPivot::Partition(std::vector<int>& vec, int left, int right, int pivotIndex) {
    int pivotValue = vec[pivotIndex];
    std::swap(vec[pivotIndex], vec[right]);
    swaps++;
    int storeIndex = left;
    for (int i = left; i < right; i++) {
        comparisons++;
        if (vec[i] < pivotValue) {
            std::swap(vec[i], vec[storeIndex]);
            swaps++;
            storeIndex++;
        }
    }
    std::swap(vec[storeIndex], vec[right]);
    swaps++;
    return storeIndex;
}
