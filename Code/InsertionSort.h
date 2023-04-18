#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include "SortingAlgorithm.h"
#include <vector>
Class InsertionSort : private SortingAlgorithm {
public:
  InsertionSort();
  void Sort (std::vector<int>& vec);
};

#endif //INSERTIONSORT_H
