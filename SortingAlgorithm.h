#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H

#include <string>

Class SortingAlgorithm {
protected: 
  string name;
  int comparisons;

void virtual sort () = 0;
 //void virtual print();
}

#endif //SORTINGALGORITHM_H
