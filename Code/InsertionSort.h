#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H


#include "SortingAlgorithm.h"
#include <vector>


Class InsertionSort : private SortingAlgorithm {
public:
  InsertionSort();
  void Sort (std::vector<int>& vec);
};

#endif //INSERTIONSORT_H
