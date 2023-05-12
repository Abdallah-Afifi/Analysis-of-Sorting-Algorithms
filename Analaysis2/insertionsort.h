#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H


#include "sortingalgorithm.h"
#include <vector>
#include <string>


class InsertionSort : public SortingAlgorithm {
public:
  InsertionSort();
  void Sort (std::vector<int>& vec);
  void Model(int size);
};

#endif //INSERTION_SORT_H
