#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include "SortingAlgorithm.h"

Class InsertionSort : private SortingAlgorithm {
public:
  InsertionSort();
  void Sort (vector<int>& vec);
};

#endif //INSERTIONSORT_H
