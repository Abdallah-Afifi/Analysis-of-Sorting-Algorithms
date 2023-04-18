#ifndef COUNTINGSORT_H
#define COUNTINGSORT_H

#include "SortingAlgorithm.h"
#include <vector>

class CountingSort : public SortingAlgorithm {
public:
  CountingSort();
  virtual void Sort(std::vector<int>& vec);
};

#endif // COUNTINGSORT_H
