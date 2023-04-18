#include "ShellSort.h"
#include "SortingAlgorithm.h"
#include <vector>

ShellSort::ShellSort() : SortingAlgorithm("Shell Sort") {}

void ShellSort::Sort(std::vector<int>& vec) {
    int size = vec.size();
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i++) {
            int temp = vec[i];
            int j;
            for (j = i; j >= gap && vec[j - gap] > temp; j -= gap) {
                vec[j] = vec[j - gap];
                comparisons++;
                swaps++;
            }
            vec[j] = temp;
            swaps++;
        }
    }
}
