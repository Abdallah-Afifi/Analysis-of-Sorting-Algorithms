#ifndef QUICK_SORT_MEDIAN_PIVOT_H
#define QUICK_SORT_MEDIAN_PIVOT_H
#include "SortingAlgorithm.h"

class QuickSortMedianPivot : public SortingAlgorithm {
public:
    QuickSortMedianPivot();

    void Sort(std::vector<int>& vec);

private:
    void QuickSortHelper(std::vector<int>& vec, int left, int right);

    int MedianOfThree(std::vector<int>& vec, int left, int right);

    int Partition(std::vector<int>& vec, int left, int right, int pivotIndex);
};

#endif //QUICK_SORT_MEDIAN_PIVOT_H
