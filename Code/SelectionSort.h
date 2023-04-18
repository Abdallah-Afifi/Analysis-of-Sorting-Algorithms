#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include "SortingAlgorithm.h"

class SelectionSort : public SortingAlgorithm {
public:
    SelectionSort();

    void Sort(vector<int>& vec);
};

#endif //SELECTION_SORT_H
