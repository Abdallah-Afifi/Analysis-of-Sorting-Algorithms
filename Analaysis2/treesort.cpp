#include "TreeSort.h"
#include "SortingAlgorithm.h"
#include <vector>
#include <string>
#include <cmath>

TreeSort::TreeSort() : SortingAlgorithm("Tree Sort") {}

void TreeSort::Model(int size) {

    model = (size * std::log2(size));
}

void TreeSort::Sort(std::vector<int>& vec) {
    Node* root = nullptr;
    for (int num : vec) {
        root = Insert(root, num);
    }
    vec.clear(); // clear the input vector before adding the sorted values
    TraverseInOrder(root, vec);
}

TreeSort::Node::Node(int val) : value(val), left(nullptr), right(nullptr) {}

TreeSort::Node* TreeSort::Insert(Node* root, int num) {
    if (!root) {
        return new Node(num);
    }

    comparisons++;
    swaps++;
    if (num < root->value) {
        root->left = Insert(root->left, num);
    } else {
        root->right = Insert(root->right, num);
    }

    return root;
}

void TreeSort::TraverseInOrder(Node* root, std::vector<int>& vec) {
    if (!root) {
        return;
    }
    TraverseInOrder(root->left, vec);
    if (!vec.empty() && vec.back() > root->value) {
        std::swap(vec.back(), root->value);
        swaps++;
    }
    vec.push_back(root->value);
    TraverseInOrder(root->right, vec);
    comparisons++;
}
