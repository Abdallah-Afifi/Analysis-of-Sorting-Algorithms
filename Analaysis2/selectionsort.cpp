#include "selectionsort.h"
#include "SortingAlgorithm.h"
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>


SelectionSort::SelectionSort() : SortingAlgorithm("Selection Sort") {}

void SelectionSort::Model(int size) {

    model = std::pow(size, 2);
}

void SelectionSort::Sort(std::vector<int>& vec) {
    int size = vec.size();
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (vec[j] < vec[minIdx]) {
                minIdx = j;
            }
            comparisons++;
        }
        std::swap(vec[i], vec[minIdx]);
        swaps++;
    }
}
