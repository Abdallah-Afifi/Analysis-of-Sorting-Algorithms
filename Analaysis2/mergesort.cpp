#include "MergeSort.h"
#include <vector>
#include <string>
#include <cmath>

MergeSort::MergeSort() : SortingAlgorithm("Merge Sort") {}

void MergeSort::Model(int size) {

    model = (size * std::log2(size));
}

void MergeSort::Sort(std::vector<int>& vec) {
    int size = vec.size();
    MergeSortHelper(vec, 0, size - 1);
}

void MergeSort::MergeSortHelper(std::vector<int>& vec, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        MergeSortHelper(vec, left, mid);
        MergeSortHelper(vec, mid + 1, right);
        Merge(vec, left, mid, right);
    }
}

void MergeSort::Merge(std::vector<int>& vec, int left, int mid, int right) {
    int idx1 = mid - left + 1;
    int idx2 = right - mid;
    std::vector<int> Left(idx1), Right(idx2);

    for (int i = 0; i < idx1; i++) {
        Left[i] = vec[left + i];
    }
    for (int j = 0; j < idx2; j++) {
        Right[j] = vec[mid + 1 + j];
    }

    int i = 0, j = 0, key = left;
    while (i < idx1 && j < idx2) {
        if (Left[i] <= Right[j]) {
            vec[key++] = Left[i++];
        } else {
            vec[key++] = Right[j++];
            swaps++;
        }
        comparisons++;
    }

    while (i < idx1) {
        vec[key++] = Left[i++];
    }
    while (j < idx2) {
        vec[key++] = Right[j++];
    }
}
