#ifndef HEAP_SORT_H
#define HEAP_SORT_H

#include <vector>
#include <string>
#include "SortingAlgorithm.h"

class HeapSort : public SortingAlgorithm {

public:
    HeapSort();
  void Sort(std::vector<int>& vec);
  void Model(int size);
private:
   void BuildMaxHeap(std::vector<int>& vec, int size);
   void Heapify(std::vector<int>& vec, int i, int size);


};

#endif //HEAP_SORT_H
