#ifndef SHELL_SORT_H
#define SHELL_SORT_H

#include "SortingAlgorithm.h"
#include <vector>
#include <string>

class ShellSort : public SortingAlgorithm {
public:
    ShellSort();

    void Sort(std::vector<int>& vec);
};

#endif // SHELL_SORT_H
