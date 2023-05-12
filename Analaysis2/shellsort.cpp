#include "ShellSort.h"
#include "SortingAlgorithm.h"
#include <vector>
#include <string>
#include <cmath>

ShellSort::ShellSort() : SortingAlgorithm("Shell Sort") {}

void ShellSort::Model(int size) {

    model = std::pow(size, 3 / 2);
}

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
