#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H

#include <string>
#include <algorithm>

Class SortingAlgorithm {
protected: 
  string name;
  int comparisons;
  int swaps;

void virtual sort () = 0;

bool is_sorted ();
}

#endif //SORTINGALGORITHM_H
