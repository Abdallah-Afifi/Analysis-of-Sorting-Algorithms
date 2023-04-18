#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H

#include <string>
#include <vector>

using namespace std;

class SortingAlgorithm {
public:
    SortingAlgorithm(string name);
    virtual void Sort(vector<int>& vec) = 0;
    int GetComparisons();
    int GetSwaps();
    string GetName();

protected:
    string Name;
    int Comparisons;
    int Swaps;
};


#endif //SORTINGALGORITHM_H
