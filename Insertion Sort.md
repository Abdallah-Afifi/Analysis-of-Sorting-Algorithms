# Insertion Sort

# Introduction

Insertion Sort is a simple sorting algorithm that works by repeatedly inserting each element of an array into its correct position in a sorted subarray. The algorithm maintains two subarrays: the sorted subarray which is initially the first element of the array, and the unsorted subarray which is initially the remaining elements of the array.

Insertion Sort has a time complexity of O(n^2), making it inefficient for large datasets. However, it has the advantage of being stable, meaning that it preserves the relative order of equal elements in the sorted array.

# Algorithm

The algorithm works as follows:

Set the first element of the array as the sorted subarray.

Iterate through the remaining unsorted elements of the array.

For each unsorted element, compare it to each element in the sorted subarray, starting from the last element and moving towards the beginning of the sorted subarray.

If the unsorted element is smaller than the current element in the sorted subarray, shift the current element one position to the right.

If the unsorted element is greater than or equal to the current element in the sorted subarray, insert the unsorted element into the sorted subarray at the current position.

Repeat steps 2-5 until all unsorted elements have been inserted into the sorted subarray.

# Conclusion

Insertion Sort is a simple and efficient sorting algorithm that is stable and preserves the relative order of equal elements in the sorted array.
However, its time complexity of O(n^2) makes it inefficient for large datasets. 
Insertion Sort can be useful in certain situations where code simplicity and efficiency are important, such as sorting small datasets or when the input is already partially sorted.

# Reference 

https://www.geeksforgeeks.org/insertion-sort/?ref=lbp
