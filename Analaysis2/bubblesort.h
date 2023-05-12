#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include "SortingAlgorithm.h"
#include <vector>

class BubbleSort : public SortingAlgorithm {
public:
    BubbleSort();
    void Sort(std::vector<int>& vec);
    void Model(int size);
};

#endif  //BUBBLE_SORT_H
