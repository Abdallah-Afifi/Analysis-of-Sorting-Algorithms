#ifndef COUNTING_SORT_H
#define COUNTING_SORT_H

#include "SortingAlgorithm.h"
#include <vector>
#include <string>

class CountingSort : public SortingAlgorithm {
public:
  CountingSort();
  void Sort(std::vector<int>& vec);
  void Model(int size);
};

#endif // COUNTING_SORT_H
