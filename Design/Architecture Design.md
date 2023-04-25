# Detailed Architecture Design of Classes

## SortingAlgorithm

* **Description:** Base class for sorting algorithms, defines the interface that all sorting algorithms must implement.
* **Properties:**
    * name: string, the name of the sorting algorithm.
    * comparisons: int, the number of element comparisons performed during the sorting operation.
    * swaps: int, the number of element swaps performed during the sorting operation.
    * model: int, the expected time complexity of the sorting algorithm based on the mathematical model.
* **Methods:**
    * SortingAlgorithm: constructor to initialize the name of the sorting algorithm.
    * Sort: abstract method to sort a generated vector of integers in ascending order, updates the Comparisons and swaps property.
    * GetComparisons: getter function to return the value of the comparisons property.
    * GetSwaps: getter function to return the value of the swaps property.
    * GetModel: getter function to return the value of the model property.
    * GetName: getter function to return the value of the name property.
    * Model: abstract method to calculate the expected time complexity of the sorting algorithm based on the mathematical model.

## SelectionSort

* **Description:** Implementation of the selection sort algorithm, which repeatedly selects the smallest element from the unsorted portion of the vector and swaps it with the first element in the unsorted portion.
* **Properties:** none
* **Methods:**
    * SelectionSort: a constructor that calls the base class constructor to initialize the properties and the name to "Selection Sort".
    * Sort: overriding function that sorts a vector of integers in ascending order using selection sort.
    * Model: overriding function to calculate the expected time complexity of selection sort based on its mathematical model.

## InsertionSort

* **Description:** Implementation of the insertion sort algorithm, which iterates through the unsorted portion of the vector and inserts each element into its correct position in the sorted portion of the vector.
* **Properties:** none
* **Methods:**
    * InsertionSort: a constructor that calls the base class constructor to initialize the properties and the name to "Insertion Sort".
    * Sort: overriding function that sorts a vector of integers in ascending order using insertion sort.
    * Model: overriding function to calculate the expected time complexity of insertion sort based on its mathematical model.

## MergeSort

* **Description:** Implementation of the merge sort algorithm, which divides the unsorted list into n sublists, each containing one element, and then repeatedly merges sublists to produce new sorted sublists until there is only one sublist remaining.
* **Properties:** none
* **Methods:**
    * MergeSort: a constructor that calls the base class constructor to initialize the properties and the name to "Merge Sort".
    * Sort: overriding function that sorts a vector of integers in ascending order using merge sort.
    * MergeSortHelper: void function that recursively sorts the vector by dividing it into smaller sub-vectors until the sub-vectors have a single element or no elements left, then merges the sub-vectors back into the original vector in sorted order.
    * Merge: void function that merges two sub-vectors into a single sorted vector, and keeps track of the number of swaps and comparisons made during the merge process.
    * Model: overriding function to calculate the expected time complexity of merge sort based on its mathematical model.

## QuickSortFirstPivot

* **Description:** Implementation of the quicksort algorithm using the first element as the pivot. This algorithm partitions the vector into two parts: one with elements smaller than the pivot and one with elements greater than or equal to the pivot. It then recursively applies the same process to each of the two parts until the vector is sorted.
* **Properties:** none
* **Methods:**
    * QuickSortFirstPivot: a constructor that calls the base class constructor to initialize the properties and the name to "QuickSort First Pivot".
    * QuickSortHelper: void function that implements the quicksort algorithm using the first element as the pivot. It takes a vector of integers, a left index, and a right index as parameters and recursively sorts the vector. It uses the Partition function to partition the vector into two parts.
    * Partition: int function that partitions the vector into two parts using the first element as the pivot. It takes a vector of integers, a left index, a right index, and a pivot index as parameters and returns the index where the pivot ends up. It swaps the pivot with the last element in the vector, and then scans the vector from left to right, swapping elements smaller than the pivot with the elements at the storeIndex. At the end, it swaps the pivot with the element at the storeIndex and
