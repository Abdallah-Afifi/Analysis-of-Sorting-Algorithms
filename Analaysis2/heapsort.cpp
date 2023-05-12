#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include "SortingAlgorithm.h"
#include "HeapSort.h"

HeapSort::HeapSort() : SortingAlgorithm ("Heap Sort") {}

void HeapSort::Model(int size) {

    model = (size * std::log2(size));
}

void HeapSort::Sort(std::vector<int>& vec) {
        int size = vec.size();
        BuildMaxHeap(vec, size);
        for (int i = size - 1; i >= 1; i--) {
            std::swap(vec[0], vec[i]);
            swaps++;
            Heapify(vec, 0, i);
        }
}

void HeapSort::BuildMaxHeap(std::vector<int>& vec, int size) {
        for (int i = size / 2 - 1; i >= 0; i--) {
            Heapify(vec, i, size);
        }
    }
void HeapSort::Heapify(std::vector<int>& vec, int i, int size) {

        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        comparisons++;
        if (left < size && vec[left] > vec[largest]) {
            largest = left;
        }

        comparisons++;
        if (right < size && vec[right] > vec[largest]) {
            largest = right;
        }

        if (largest != i) {
            std::swap(vec[i], vec[largest]);
            swaps++;
            Heapify(vec, largest, size);
        }
    }
