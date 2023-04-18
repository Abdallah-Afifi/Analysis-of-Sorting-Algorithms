#include <iostream>
#include <vector>
#include "SortingAlgorithm.h"
#include "InsertionSort.h"

using namespace std;

InsertionSort::InsertionSort() : SortingAlgorithm("Insertion Sort")
{}

InsertionSort::Sort(std::vector<int>& vec) {
 
        int size = vec.size();
        for (int i = 1; i < size; i++) {
            int key = vec[i];
            int j = i - 1;
            while (j >= 0 && vec[j] > key) {
                vec[j + 1] = vec[j];
                j--;
                comparisons++;
                swaps++;
            }
            vec[j + 1] = key;
        }
  
}
