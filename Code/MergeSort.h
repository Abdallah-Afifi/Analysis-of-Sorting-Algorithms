#ifndef MERGESORT_H
#define MERGESORT_H

#include "SortingAlgorithm.h"
#include <vector>

class MergeSort : public SortingAlgorithm {
public:
    MergeSort();

    void Sort(std::vector<int>& vec);

private:
    void MergeSortHelper(std::vector<int>& vec, int left, int right);
    void Merge(std::vector<int>& vec, int left, int mid, int right);
};

#endif /* MERGESORT_H */
