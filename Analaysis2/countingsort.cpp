#include "CountingSort.h"
#include "SortingAlgorithm.h"
#include <vector>
#include <string>
#include <algorithm>


CountingSort::CountingSort() : SortingAlgorithm("Counting Sort") {}

void CountingSort::Model(int size) {

    model = (size + size);
}

void CountingSort::Sort(std::vector<int>& vec) {
  int size = vec.size();

  // Find the range of input elements
  int range = *std::max_element(vec.begin(), vec.end());

  // Create a count array to store count of individual elements
  std::vector<int> count(range + 1, 0);

  // Store count of each element
  for (int i = 0; i < size; i++) {
    count[vec[i]]++;
    comparisons++;
  }

  // Change count[i] so that count[i] now contains actual position of this element in output array
  for (int i = 1; i <= range; i++) {
    count[i] += count[i - 1];
    comparisons++;
  }

  // Build the output array
  std::vector<int> output(size);
  for (int i = size - 1; i >= 0; i--) {
    output[count[vec[i]] - 1] = vec[i];
    count[vec[i]]--;
    swaps++;
  }

  // Copy the output array to the input array
  for (int i = 0; i < size; i++) {
    vec[i] = output[i];
    swaps++;
  }
}
