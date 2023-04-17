# Tree Sort 

# Introduction

Tree Sort is a sorting algorithm that uses the concept of Binary Search Tree(BST) data structure to sort the input elements. 
Tree Sort works by inserting all the elements in the input array into a Binary Search Tree and then traversing the tree in an inorder traversal to obtain the sorted output.

# Binary Search Tree

A Binary Search Tree is a binary tree in which each node has a key greater than all the keys in its left subtree and less than all the keys in its right subtree. 
BST provides an efficient way to search, insert and delete elements from a collection of data.

# Working of Tree Sort

Tree Sort first constructs a binary search tree by inserting all the elements of the input array into the tree. 
Since the nodes in a BST are sorted in a specific order, traversing the tree in an inorder traversal would give the sorted output.

Insertion of elements into the BST is done as follows: Starting from the root of the tree, compare the current element to be inserted with the value of the current node. If the current node is null, create a new node with the element and return. If the element to be inserted is less than the value of the current node, go to the left subtree and insert the element. Otherwise, go to the right subtree and insert the element.

Once all the elements have been inserted into the tree, traverse the tree in an inorder traversal to obtain the sorted output. Inorder traversal of a BST gives the nodes in ascending order.

# Complexity Analysis

The time complexity of constructing the BST is O(n log n) in the average case and O(n^2) in the worst case. 
The worst-case scenario is when the input elements are already sorted, and the tree formed is a skewed tree.
The time complexity of traversing the BST in an inorder traversal is O(n), as each node is visited exactly once.
Space complexity of Tree Sort is O(n) as the input array is stored in the BST.

# Conclusion

Tree Sort is a simple and efficient sorting algorithm that uses the binary search tree data structure. 
It has a time complexity of O(n log n) in the average case, making it suitable for sorting large datasets. 
However, it has a worst-case time complexity of O(n^2), making it inefficient for already sorted input data.

# References 

https://www.geeksforgeeks.org/tree-sort/
