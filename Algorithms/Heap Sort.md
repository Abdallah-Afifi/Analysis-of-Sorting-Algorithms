# Heap Sort
Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure to sort elements in an array. 
It is an in-place sorting algorithm, which means that it doesn't require additional memory for sorting, and 
it has a time complexity of O(n log n) for the worst, average, and best cases, making it efficient for large datasets.

Binary Heap

A binary (max) heap is a complete binary tree in which the value of each parent node is greater than or equal to the value of its child nodes. This is known as the heap property. A binary heap can be represented using an array, where the parent node of element i is located at index (i-1)/2, and its left and right child nodes are located at indices 2i+1 and 2i+2, respectively.
 In a min-heap, each parent node has a value less than or equal to its children.


The algorithm works in two main phases:

   1.  Build a binary max-heap (or min-heap) from the input array, where the highest (or lowest) value is at the root node (the end of the sorted array)
   This part takes O(n) time, following the below steps:
      a. Starting from the last parent node (i.e., the parent node of the last element), heapify down the node until it satisfies the heap property.
      b. Repeat step a for all parent nodes, working backwards from the last parent node to the root.
    
   2.  Repeatedly extract the maximum (or minimum) element from the heap, swap it with the last element in the remaining 
      unsorted portion of the array, and then adjust the heap structure to maintain the max-heap (or min-heap) property. 
      This part can be done in O(n*logn) time by following these steps:
         a.Swap the root node (which contains the maximum element) with the last element of the heap.
         b. Remove the last element (which now contains the maximum element) from the heap.
         c. Heapify down the root node until it satisfies the heap property.
         d. Repeat steps a-c until all elements have been extracted and placed in the sorted array.

Here is an outline of the Heap Sort algorithm:

  1. Build a max-heap from the input array.
  
  2. For each element in the array, starting from the last and moving towards the first:
      a. Swap the first (root) element with the current element. 
      b. Decrease the size of the heap by one (excluding the swapped element).
      c. "Heapify" the remaining elements to restore the max-heap property.

Heap Sort uses a "heapify" operation, which is an essential part of the algorithm. 
The heapify operation takes O(log n) time, where n is the number of elements in the heap. 
Since heapify is called n times in the worst case, the overall time complexity of the algorithm is O(n log n).

Heap Sort is not a stable sorting algorithm, which means that the relative order of equal elements may not be preserved.
It is also not an adaptive sorting algorithm, as its performance doesn't improve when the input is partially sorted.Regardless of whether the input array is partially sorted or completely unsorted, Heap Sort takes O(n log n) time to sort the data. It doesn't leverage the existing order in the input data to optimize its sorting process. In contrast, some other sorting algorithms like Insertion Sort and Bubble Sort are adaptive and can perform better on partially sorted or nearly sorted data.

# References 

https://www.geeksforgeeks.org/heap-sort/

