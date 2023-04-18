#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H

#include <string>
#include <vector>



class SortingAlgorithm {
public:
    SortingAlgorithm(string name);
    virtual void Sort(vector<int>& vec) = 0;
    int GetComparisons();
    int GetSwaps();
    string GetName();

protected:
    string Name;
    int comparisons;
    int swaps;
};


#endif //SORTINGALGORITHM_H
