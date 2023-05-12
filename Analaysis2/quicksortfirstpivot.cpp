#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include "SortingAlgorithm.h"
#include "QuickSortFirstPivot.h"


QuickSortFirstPivot::QuickSortFirstPivot() : SortingAlgorithm ("Quick Sort First Pivot") {}

void QuickSortFirstPivot::Model(int size) {

    model = (size * std::log2(size));
}

void QuickSortFirstPivot::Sort(std::vector<int>& vec) {

        int size = vec.size();
        QuickSortHelper(vec, 0, size - 1);
}

void QuickSortFirstPivot::QuickSortHelper(std::vector<int>& vec, int left, int right) {
        if (left < right) {
            int pivotIndex = left;
            pivotIndex = Partition(vec, left, right, pivotIndex);
            QuickSortHelper(vec, left, pivotIndex - 1);
            QuickSortHelper(vec, pivotIndex + 1, right);
        }
}

int QuickSortFirstPivot::Partition(std::vector<int>& vec, int left, int right, int pivotIndex) {
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


