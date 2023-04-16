# Heap Sort
Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure to sort elements in an array. 
It is an in-place sorting algorithm, which means that it doesn't require additional memory for sorting (unless implemented with an out-of- place implementation), and 
it has a time complexity of O(n log n) for the worst, average, and best cases, making it efficient for large datasets.

# Binary Heap

A binary heap (max/min) tree does NOT follow the rules of a binary search tree, where the left child of the parent node must be less than or equal to the parent node 
and the right child must be greater than the parent node.
A binary max-heap is a complete binary tree in which the value of each parent node is greater than or equal to the value of its child nodes. A max-heap implementation is used to sort elements in an ascending order. A complete binary tree may or may not have  an incomplete lower level of nodes, however they must be filled from left to right with no empty spots in the middle. This is known as the heap property. A binary heap can be represented using an array, where the element i ia a parent node, and its left and right child nodes are located at indices 2i+1 and 2i+2, respectively. To find the parent node (i1) of an element located at index i, i1=i/2-1.
if the index of the first array element is 1 not 0, the formulae are:
(left child) int l=2i;
(right child) int r=2i+1;
(parent node) int i1= i/2;
In a min-heap, each parent node has a value less than or equal to its children, this version is used to sort in a descending order.


 # Heapify Function
Heap Sort uses a "heapify" operation, which is an essential part of the algorithm. It ensures
that every parent node has children that are less than it in the max-heap case, and children
that are greater than it in the min-heap case by working recursively starting from the last parent node.
The heapify operation takes O(log n) time, where n is the number of elements in the heap. 
Since heapify is called n times in the worst case, the overall time complexity of the algorithm is O(n log n).

# In-Place vs. Out-of-Place
Heap sort can be implemented in-place or out-of-place. In an in-place implementation, the input data is sorted in the same memory space without creating a separate sorted array. In an out-of-place implementation, a separate sorted array is created to hold the sorted data. The in-place variant of heap sort is more memory-efficient but may be slower due to additional memory accesses.

# Algorithm

   1.  Build a binary max-heap (or min-heap) from the input array, where the highest (or lowest) value is at the root node (the end of the sorted array)
   This part takes O(n) time, following the steps below:
      a. Starting from the last parent node (i.e., the parent node of the last element), heapify down the node until it satisfies the heap property.
      b. Repeat step a for all parent nodes, working backwards from the last parent node to the root.
    
   2.  Repeatedly extract the maximum (or minimum) element from the heap, swap it with the last element in the remaining 
      unsorted portion of the array, and then adjust the heap structure to maintain the max-heap (or min-heap) property. 
      This part can be done in O(nlogn) time by following these steps:
         a. Swap the root node (which contains the maximum element) with the last element of the heap.
         b. Remove the last element (which now contains the maximum element) from the heap.
         c. Heapify down the root node until it satisfies the heap property.
         d. Repeat steps a-c until all elements have been extracted and placed in the sorted array.
         
# Conclusion

Heap sort is an efficient sorting algorithm that works by creating a binary heap from the input data and repeatedly extracting the maximum element from the heap and placing it at the end of the sorted array. It has a time complexity of O(n log n) and can be implemented using either a max heap or a min heap, as well as in-place or out-of-place. In C++, heap sort can be implemented using a priority queue or a custom implementation of a binary heap.
Heap Sort is not a stable sorting algorithm, which means that the relative order of equal elements may not be preserved.
It is also not an adaptive sorting algorithm, as its performance doesn't improve when the input is partially sorted.Regardless of whether the input array is partially sorted or completely unsorted, Heap Sort takes O(n log n) time to sort the data. It doesn't leverage the existing order in the input data to optimize its sorting process. In contrast, some other sorting algorithms like Insertion Sort and Bubble Sort are adaptive and can perform better on partially sorted or nearly sorted data.

# References 

https://www.geeksforgeeks.org/heap-sort/

