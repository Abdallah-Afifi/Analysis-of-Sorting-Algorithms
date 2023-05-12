#ifndef SORTING_ALGORITHM_H
#define SORTING_ALGORITHM_H

#include <string>
#include <vector>



class SortingAlgorithm {
public:
    SortingAlgorithm(std::string Name);
    virtual void Sort(std::vector<int>& vec) = 0;
    virtual void Model(int size) = 0;
    int GetComparisons();
    int GetSwaps();
    int GetModel();
    std::string GetName();

protected:
    std::string name;
    int comparisons;
    int swaps;
    int model;
};


#endif //SORTING_ALGORITHM_H



