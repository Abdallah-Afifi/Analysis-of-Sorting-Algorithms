# Selection Sort

# Introduction

Selection Sort is a simple sorting algorithm that sorts an array of n elements by repeatedly finding the minimum element from the unsorted part of the array and moving it to the beginning of the array. The algorithm maintains two subarrays: the sorted subarray which is initially empty, and the unsorted subarray which is initially the entire array.

The algorithm has a time complexity of O(n^2), making it inefficient for large datasets. However, Selection Sort has the advantage of having a small code footprint and is easy to implement.

# Algorithm

The algorithm works as follows:

Set the first element of the array as the minimum element.

Find the minimum element in the unsorted subarray.

Swap the minimum element with the first element of the unsorted subarray.

Increment the size of the sorted subarray by one.

Repeat steps 2-4 until the unsorted subarray is empty.

# Conclusion

Selection Sort is a simple and intuitive sorting algorithm that is easy to implement.
However, its time complexity of O(n^2) makes it inefficient for large datasets. 
Selection Sort can be useful in certain situations where code simplicity and efficiency are important.

# Reference 

https://www.geeksforgeeks.org/selection-sort/?ref=lbp
