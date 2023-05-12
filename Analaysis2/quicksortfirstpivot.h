#ifndef QUICK_SORT_FIRST_PIVOT_H
#define QUICK_SORT_FIRST_PIVOT_H

#include <vector>
#include <string>
#include "SortingAlgorithm.h"

class QuickSortFirstPivot : public SortingAlgorithm {
public:
    QuickSortFirstPivot();
    void Sort(std::vector<int>& vec);
    void Model(int size);

private:
    void QuickSortHelper(std::vector<int>& vec, int left, int right);
    int Partition(std::vector<int>& vec, int left, int right, int pivotIndex);

};

#endif //QUICK_SORT_FIRST_PIVOT_H
