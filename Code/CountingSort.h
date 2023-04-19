#ifndef COUNTING_SORT_H
#define COUNTING_SORT_H

#include "SortingAlgorithm.h"
#include <vector>
#include <string>

class CountingSort : public SortingAlgorithm {
public:
  CountingSort();
  virtual void Sort(std::vector<int>& vec);
};

#endif // COUNTING_SORT_H
