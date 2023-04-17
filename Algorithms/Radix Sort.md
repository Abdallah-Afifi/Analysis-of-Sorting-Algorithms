# Radix Sort 

Radix Sort is a non-comparative sorting algorithm that sorts data by grouping elements based on their digits. 
It is particularly useful for sorting data that has a fixed number of digits or for sorting data where the key is represented in a fixed-length format. 
Unlike other sorting algorithms that compare elements to determine their order, Radix Sort sorts elements based on their place value, starting with the least significant digit and working its way up.

Radix Sort has a time complexity of O(nk) in the worst-case scenario, where n is the number of elements in the array and k is the maximum number of digits in the largest element. 
This makes it more efficient than other sorting algorithms that have a time complexity of O(n^2) or worse. 
However, it does require additional memory to store the intermediate results, which can be a drawback for very large data sets.

The algorithm works by grouping elements based on their digits, starting with the least significant digit and working its way up. 
Each digit is treated as a separate pass, and the algorithm sorts the elements based on that digit before moving on to the next pass. 
The sorting is performed using a stable sorting algorithm, such as Counting Sort or Bucket Sort, to preserve the relative order of elements with the same key.

# Step-by-step process for implementing Radix Sort

Determine the maximum number of digits in the largest element in the array.
Iterate over the digits, starting with the least significant digit and working up.
For each digit, sort the elements based on that digit using a stable sorting algorithm, such as Counting Sort or Bucket Sort.
Combine the results of each pass to produce the final sorted array.

# References
https://www.geeksforgeeks.org/radix-sort/
