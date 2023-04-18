#ifndef QUICK_SORT_RANDOM_PIVOT_H
#define QUICK_SORT_RANDOM_PIVOT_H

#include "SortingAlgorithm.h"
#include <vector>

class QuickSortRandomPivot : public SortingAlgorithm {
public:
    QuickSortRandomPivot();
    virtual ~QuickSortRandomPivot();
    void Sort(std::vector<int>& vec);

private:
    void QuickSortHelper(std::vector<int>& vec, int left, int right);
    int Partition(std::vector<int>& vec, int left, int right, int pivotIndex);
};

#endif // QUICK_SORT_RANDOM_PIVOT_H
