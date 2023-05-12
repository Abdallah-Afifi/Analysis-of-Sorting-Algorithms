#ifndef TREE_SORT_H
#define TREE_SORT_H


#include "SortingAlgorithm.h"
#include <vector>
#include <string>

class TreeSort : public SortingAlgorithm {
public:
    TreeSort();

    void Sort(std::vector<int>& vec);
    void Model(int size);

private:
    struct Node {
        int value;
        Node* left;
        Node* right;

        Node(int val);
    };

    Node* Insert(Node* root, int num);
    void TraverseInOrder(Node* root, std::vector<int>& vec);

};

#endif //TREE_SORT_H
