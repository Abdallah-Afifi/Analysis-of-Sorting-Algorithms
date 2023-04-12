# Quick Sort

# Introduction

Quick Sort is a widely-used sorting algorithm that uses a divide-and-conquer approach to sort an array of elements.
The basic idea behind Quick Sort is to partition the array into two sub-arrays based on a chosen pivot element, such that all elements in the left sub-array are smaller than the pivot, and all elements in the right sub-array are greater than the pivot. 
Then, the algorithm recursively sorts the left and right sub-arrays.

# Pivot Choice

The choice of pivot element can significantly impact the performance of Quick Sort. 
A good pivot choice should divide the array into roughly equal-sized sub-arrays to minimize the number of comparisons and swaps required. 
There are several ways to choose a pivot element in Quick Sort, each with its advantages and disadvantages.

# First Element
The simplest way to choose a pivot element is to select the first element of the array. 
This is also the default pivot choice in many Quick Sort implementations.
However, this pivot choice can be problematic when the input array is already sorted, or nearly sorted, as it can lead to the worst-case time complexity of O(n^2).
In such cases, choosing a random pivot or a median pivot can improve the performance of the algorithm.

# Random Element
Choosing a random pivot element is a common way to avoid worst-case behavior in Quick Sort. 
This pivot choice selects a random element from the array as the pivot, and can lead to a more even distribution of elements in the sub-arrays. 
However, this pivot choice can be unpredictable and may require additional random number generation, which can impact the performance of the algorithm.

# Median Element
Choosing the median element of the array as the pivot can also improve the performance of Quick Sort.
This pivot choice selects the median element of the array as the pivot, which ensures that the array is divided into two roughly equal-sized sub-arrays. 
However, finding the median element can be computationally expensive, as it requires sorting a subset of the array to find the middle element.

# Three-Element Median
A variation of the median pivot choice is to use the median of three elements. 
This pivot choice selects the median value among the first, middle, and last elements of the array. 
This pivot choice can be faster than finding the exact median, and can still provide good partitioning of the array.

# Ninther Element
The Ninther pivot choice is a more sophisticated way of selecting a pivot in Quick Sort. 
This pivot choice selects the median of three medians, where each median is calculated from a subset of nine elements in the array. 
This pivot choice can provide good partitioning of the array and can help avoid worst-case behavior.

# Conclusion

Quick Sort is a powerful sorting algorithm that can be implemented in various ways depending on the pivot choice. 
The choice of pivot can significantly impact the performance of the algorithm, and there are several ways to choose a pivot element, each with its advantages and disadvantages. 
In C++, Quick Sort can be implemented using recursion and various pivot choices can be implemented using if-else statements or switch-case statements.

# Reference 

https://www.geeksforgeeks.org/quick-sort/?ref=lbp



