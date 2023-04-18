#include <vector>
#include "SortingAlgorithm.h"

class HeapSort : public SortingAlgorithm {
  
public:
  HeapSort()
  void Sort(std::vector<int>& vec);
private:
   void BuildMaxHeap(std::vector<int>& vec, int size);
   void Heapify(std::vector<int>& vec, int i, int size);


};