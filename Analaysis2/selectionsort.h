#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include "sortingalgorithm.h"
#include <vector>
#include <string>

class SelectionSort : public SortingAlgorithm {
public:
    SelectionSort();

    void Sort(std::vector<int>& vec);
    void Model(int size);
};

#endif //SELECTION_SORT_H
