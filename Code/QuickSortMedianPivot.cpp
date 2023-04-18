#include "QuickSortMedianPivot.h"

QuickSortMedianPivot::QuickSortMedianPivot() : SortingAlgorithm("Quick Sort Median Pivot") {}

void QuickSortMedianPivot::Sort(std::vector<int>& vec) {
    int size = vec.size();
    QuickSortHelper(vec, 0, size - 1);
}

void QuickSortMedianPivot::QuickSortHelper(std::vector<int>& vec, int left, int right) {
    if (left < right) {
        int pivotIndex = MedianOfThree(vec, left, right);
        pivotIndex = Partition(vec, left, right, pivotIndex);
        QuickSortHelper(vec, left, pivotIndex - 1);
        QuickSortHelper(vec, pivotIndex + 1, right);
    }
}

int QuickSortMedianPivot::MedianOfThree(std::vector<int>& vec, int left, int right) {
    int mid = (left + right) / 2;
    if (vec[right] < vec[left]) {
        std::swap(vec[left], vec[right]);
    }
    if (vec[mid] < vec[left]) {
        std::swap(vec[left], vec[mid]);
    }
    if (vec[right] < vec[mid]) {
        std::swap(vec[mid], vec[right]);
    }
    return mid;
}

int QuickSortMedianPivot::Partition(std::vector<int>& vec, int left, int right, int pivotIndex) {
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