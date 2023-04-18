#ifndef MERGE_SORT_H
#define MERGE_SORT_H

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

#endif //MERGE+_SORT_H 
