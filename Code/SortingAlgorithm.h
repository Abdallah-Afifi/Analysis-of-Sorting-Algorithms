#ifndef SORTING_ALGORITHM_H
#define SORTING_ALGORITHM_H

#include <string>
#include <vector>



class SortingAlgorithm {
public:
    SortingAlgorithm(string Name);
    virtual void Sort(vector<int>& vec) = 0;
    int GetComparisons();
    int GetSwaps();
    string GetName();

protected:
    string name;
    int comparisons;
    int swaps;
};


#endif //SORTING_ALGORITHM_H
