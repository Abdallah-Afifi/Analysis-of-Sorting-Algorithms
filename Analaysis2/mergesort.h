#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include "SortingAlgorithm.h"
#include <vector>
#include <string>

class MergeSort : public SortingAlgorithm {
public:
    MergeSort();

    void Sort(std::vector<int>& vec);
    void Model(int size);

private:
    void MergeSortHelper(std::vector<int>& vec, int left, int right);
    void Merge(std::vector<int>& vec, int left, int mid, int right);
};

#endif //MERGE_SORT_H
