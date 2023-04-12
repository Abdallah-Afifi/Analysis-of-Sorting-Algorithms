# Merge Sort

# Introduction

Merge Sort is a divide-and-conquer sorting algorithm that works by dividing an array into two halves, sorting each half recursively, and then merging the two sorted halves into a single sorted array. 
The algorithm has a time complexity of O(n log n), making it efficient for large datasets.
Merge Sort is a stable sorting algorithm, meaning that it preserves the relative order of equal elements in the sorted array.

# Algorithm

The algorithm works as follows:

Divide the unsorted array into two halves.

Sort each half recursively by applying Merge Sort.

Merge the two sorted halves into a single sorted array.

The merging step is the most important step in the Merge Sort algorithm.

To merge two sorted arrays, we use two pointers to traverse the two arrays from left to right.

We compare the values at the current positions of the two pointers and insert the smaller value into a new temporary array. 

We repeat this process until all elements from both arrays have been inserted into the temporary array.

Finally, we copy the temporary array back into the original array.

# Complexity Analysis

The time complexity of Merge Sort is O(n log n), where n is the number of elements in the array. 
This is because the algorithm divides the array into two halves and sorts each half recursively, and the merging step takes O(n) time. 
The space complexity is O(n), because the algorithm requires additional memory to store the temporary arrays during the merging step.

# Conclusion

Merge Sort is a widely-used sorting algorithm that is efficient for large datasets. 
It is a stable sorting algorithm that preserves the relative order of equal elements in the sorted array. 
In C++, Merge Sort can be implemented using recursion and the merging step can be performed using temporary arrays.

# Reference 

https://www.geeksforgeeks.org/merge-sort/?ref=lbp

