#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "SortingAlgorithm.h"
#include <vector>

class BubbleSort : public SortingAlgorithm {
public:
    BubbleSort();
    void Sort(std::vector<int>& vec);
};

#endif
