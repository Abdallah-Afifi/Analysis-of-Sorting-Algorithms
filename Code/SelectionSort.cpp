#include "SelectionSort.h"
#include <algorithm>

SelectionSort::SelectionSort() : SortingAlgorithm("Selection Sort") {}

void SelectionSort::Sort(vector<int>& vec) {
    int size = vec.size();
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (vec[j] < vec[minIdx]) {
                minIdx = j;
            }
            comparisons++;
        }
        swap(vec[i], vec[minIdx]);
        swaps++;
    }
}
