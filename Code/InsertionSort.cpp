#include <iostream>
#include "SortingAlgorithm.h"
#include "InsertionSort.h"

using namespace std;

InsertionSort::InsertionSort() : SortingAlgorithm("Insertion Sort")
{}

InsertionSort::Sort(vector<int>& vec) {
 
        int size = arr.size();
        for (int i = 1; i < size; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
                comparisons++;
                swaps++;
            }
            arr[j + 1] = key;
        }
  
}
