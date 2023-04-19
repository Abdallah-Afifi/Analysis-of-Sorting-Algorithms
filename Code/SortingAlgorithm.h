#ifndef SORTING_ALGORITHM_H
#define SORTING_ALGORITHM_H

#include <string>
#include <vector>



class SortingAlgorithm {
public:
    SortingAlgorithm(std::string Name);
    virtual void Sort(std::vector<int>& vec) = 0;
    int GetComparisons();
    int GetSwaps();
    std::string GetName();

protected:
    std::string name;
    int comparisons;
    int swaps;
};


#endif //SORTING_ALGORITHM_H
