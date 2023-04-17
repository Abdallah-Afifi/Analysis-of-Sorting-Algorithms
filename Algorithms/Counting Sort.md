# Counting Sort 

# Introduction

Counting Sort is a non-comparison based sorting algorithm used to sort elements with non-negative integer values. 
It sorts the input array by counting the frequency of each distinct element in the array, and then constructing a sorted array by repeatedly appending the same elements the same number of times as their frequency. 
Counting Sort is an efficient sorting algorithm with a time complexity of O(n+k), where n is the size of the input array and k is the range of the input values.

# Algorithm

Find the maximum value in the input array.

Initialize an auxiliary array of size max+1 to store the frequency of each element in the input array.

Traverse the input array and count the frequency of each element by incrementing the corresponding index in the auxiliary array.

Modify the auxiliary array such that each element represents the sum of the previous elements.

Traverse the input array in reverse order and place each element in its correct position in the output array by using the auxiliary array.

Return the sorted output array.

# Example

Suppose we have an input array {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5}. The maximum value in this array is 9. Therefore, we create an auxiliary array of size 10 to store the frequency of each element.

Auxiliary array after initialization: {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

We then traverse the input array and count the frequency of each element.

Auxiliary array after counting: {0, 2, 1, 2, 3, 3, 1, 0, 1, 0}

We modify the auxiliary array such that each element represents the sum of the previous elements.

Auxiliary array after modification: {0, 2, 3, 5, 8, 11, 12, 12, 13, 13}

We traverse the input array in reverse order and place each element in its correct position in the output array by using the auxiliary array.

Output array: {1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9}

# Time Complexity

The time complexity of Counting Sort is O(n+k), where n is the size of the input array and k is the range of the input values. 
This makes Counting Sort a linear time sorting algorithm, which is faster than many comparison-based sorting algorithms like Quick Sort, Merge Sort, and Heap Sort.

# Limitations

Counting Sort can only be used to sort elements with non-negative integer values. 
It requires additional memory to store the auxiliary array, which can be a limitation for large input sizes or limited memory systems. 
Counting Sort is not a stable sorting algorithm, which means that it does not preserve the order of equal elements in the input array.

# Conclusion

Counting Sort is a simple and efficient sorting algorithm for sorting elements with non-negative integer values. 
It has a linear time complexity of O(n+k), which makes it faster than many comparison-based sorting algorithms. 
However, it has some limitations like being applicable only to non-negative integers, requiring additional memory for the auxiliary array, and not preserving the order of equal elements.

# References 
https://www.geeksforgeeks.org/counting-sort/


