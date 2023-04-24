# Detailed Architecture Design of Classes 

Class: SortingAlgorithm
Description: Base class for sorting algorithms, defines the interface that all sorting algorithms must implement.
Properties:
name: string, the name of the sorting algorithm. 
comparisons: int, the number of element comparisons performed during the sorting operation.
swaps: int, the number of element swaps performed during the sorting operation. 
model: int, the expected time complexity of the sorting algorithm based on the mathematical model. 
Methods:
SortingAlgorithm: constructor to initialzie the name of the sorting algorithm. 
Sort: void pure virtual function to sort a generated vector of integers in ascending order, updates the Comparisons and swaps property.
GetComparisons: getter function to retrun the value of the comparisons property. 
GetSwaps: getter function to retrun the value of the swaps property. 
GetModel: getter function to retrun the value of the model property.
GetName: getter function to return the value of the name property.
Model: void pure virtual function to calculate the expected time complexity of the sorting algorithm based on the mathematical model.  

Class: SelectionSort
Description: Implementation of the selection sort algorithm, which repeatedly selects the smallest element from the unsorted portion of the vector and swaps it with the first element in the unsorted portion. 
Properties: none
Methods:
SelectionSort: a constructor that calls the base class constructor to initialze the properties and the name to "Selection Sort". 
Sort: void overriding function that sorts a vector of integers in ascending order using selection sort. 
Model: void overriding function to calculate the expected time complexity of selection sort based on its mathematical model.

Class: InsertionSort
Description: Implementation of the insertion sort algorithm, which iterates through the unsorted portion of the vector and inserts each element into its correct position in the sorted portion of the vector.
Properties: none
Methods:
InsertionSort: a constructor that calls the base class constructor to initialize the properties and the name to "Insertion Sort".
Sort: void overriding function that sorts a vector of integers in ascending order using insertion sort.
Model: void overriding function to calculate the expected time complexity of insertion sort based on its mathematical model.

Class: MergeSort
Description: Implementation of the merge sort algorithm, which divides the unsorted list into n sublists, each containing one element, and then repeatedly merges sublists to produce new sorted sublists until there is only one sublist remaining. 
Properties: none
Methods:
MergeSort: a constructor that calls the base class constructor to initialize the properties and the name to "Merge Sort". 
Sort: void overriding function that sorts a vector of integers in ascending order using merge sort. 
MergeSortHelper: void function that recursively sorts the vector by dividing it into smaller sub-vectors until the sub-vectors have a single element or no elements left, then merges the sub-vectors back into the original vector in sorted order.
Merge: void function that merges two sub-vectors into a single sorted vector, and keeps track of the number of swaps and comparisons made during the merge process. 
Model: void overriding function to calculate the expected time complexity of merge sort based on its mathematical model.


Class: QuickSortFirstPivot
Description: Implementation of the quicksort algorithm using the first element as the pivot. This algorithm partitions the vector into two parts: one with elements smaller than the pivot and one with elements greater than or equal to the pivot. It then recursively applies the same process to each of the two parts until the vector is sorted.
Properties: none
Methods:
QuickSortFirstPivot: a constructor that calls the base class constructor to initialize the properties and the name to "QuickSort First Pivot". 
QuickSortHelper: void function that implements the quicksort algorithm using the first element as the pivot. It takes a vector of integers, a left index, and a right index as parameters and recursively sorts the vector. It uses the Partition function to partition the vector into two parts.
Partition: int function that partitions the vector into two parts using the first element as the pivot. It takes a vector of integers, a left index, a right index, and a pivot index as parameters and returns the index where the pivot ends up. It swaps the pivot with the last element in the vector, and then scans the vector from left to right, swapping elements smaller than the pivot with the elements at the storeIndex. At the end, it swaps the pivot with the element at the storeIndex and returns the storeIndex.
Model: void overriding function to calculate the expected time complexity of quicksort using the first element as the pivot based on its mathematical model.


Class: QuickSortRandomPivot
Description: Implementation of the quicksort algorithm using a randomly chosen pivot. This algorithm partitions the vector into two parts: one with elements smaller than the pivot and one with elements greater than or equal to the pivot. It then recursively applies the same process to each of the two parts until the vector is sorted.
Properties: none
Methods:
QuickSortRandomPivot: a constructor that calls the base class constructor to initialize the properties and the name to "QuickSort Random Pivot". 
QuickSortHelper: void function that implements the quicksort algorithm using a randomly chosen pivot. It takes a vector of integers, a left index, and a right index as parameters and recursively sorts the vector. It uses the Partition function to partition the vector into two parts, with the pivot chosen at random from the range [left, right].
Partition: int function that partitions the vector into two parts using the randomly chosen pivot. It takes a vector of integers, a left index, a right index, and a pivot index as parameters and returns the index where the pivot ends up. It swaps the pivot with the last element in the vector, and then scans the vector from left to right, swapping elements smaller than the pivot with the elements at the storeIndex. At the end, it swaps the pivot with the element at the storeIndex and returns the storeIndex.
Model: void overriding function to calculate the expected time complexity of quicksort using a randomly chosen pivot based on its mathematical model.


Class: QuickSortMedianPivot
Description: Implementation of the quicksort algorithm using the median element as the pivot. This algorithm partitions the vector into two parts: one with elements smaller than the pivot and one with elements greater than the pivot. It then recursively applies the same process to each of the two parts until the vector is sorted. The median element is chosen as the pivot to reduce the chance of worst-case behavior.
Properties: none
Methods:
QuickSortMedianPivot: a constructor that calls the base class constructor to initialize the properties and the name to "QuickSort Median Pivot".
QuickSortHelper: void function that implements the quicksort algorithm using the median element as the pivot. It takes a vector of integers, a left index, and a right index as parameters and recursively sorts the vector. It uses the Partition function to partition the vector into two parts.
Partition: int function that partitions the vector into two parts using the median element as the pivot. It takes a vector of integers, a left index, a right index, and a pivot index as parameters and returns the index where the pivot ends up. It chooses the median element among the first, last, and middle elements of the vector as the pivot. It swaps the pivot with the last element in the vector, and then scans the vector from left to right, swapping elements smaller than the pivot with the elements at the storeIndex. At the end, it swaps the pivot with the element at the storeIndex and returns the storeIndex.
Model: void overriding function to calculate the expected time complexity of quicksort using the median element as the pivot based on its mathematical model.


Class: BubbleSort
Description: Implementation of the bubble sort algorithm, which repeatedly compares adjacent elements in the vector and swaps them if they are in the wrong order. This process is repeated until the vector is sorted.
Properties: none
Methods:
BubbleSort: a constructor that calls the base class constructor to initialize the properties and the name to "Bubble Sort".
Sort: void overriding function that sorts a vector of integers in ascending order using bubble sort.
Model: void overriding function to calculate the expected time complexity of bubble sort based on its mathematical model.

Class: CountingSort
Description: Implementation of the counting sort algorithm, which works by counting the occurrences of each unique element in the input vector, then using those counts to determine the position of each element in the sorted output vector.
Properties: none
Methods:
CountingSort: a constructor that calls the base class constructor to initialize the properties and the name to "Counting Sort".
Sort: void overriding function that sorts a vector of integers in ascending order using counting sort.
Model: void overriding function to calculate the expected time complexity of counting sort based on its mathematical model.

Class: ShellSort
Description: Implementation of the shell sort algorithm, which is an extension of the insertion sort algorithm. It starts by sorting pairs of elements far apart from each other, then progressively reducing the gap between the elements being compared until it reaches 1 and becomes equivalent to insertion sort. 
Properties: none
Methods:
ShellSort: a constructor that calls the base class constructor to initialize the properties and the name to "Shell Sort". 
Sort: void overriding function that sorts a vector of integers in ascending order using shell sort. 
Model: void overriding function to calculate the expected time complexity of shell sort based on its mathematical model.

Class: HeapSort
Description: Implementation of the heap sort algorithm, which sorts an array by first building a max heap from the array and then repeatedly extracting the maximum element from the heap and placing it at the end of the sorted portion of the array.
Properties: none
Methods:
HeapSort: a constructor that calls the base class constructor to initialize the properties and the name to "Heap Sort".
BuildMaxHeap: void function that builds a max heap from a vector of integers of a given size. It starts from the middle of the array and calls Heapify for every element.
Heapify: void function that maintains the max heap property of a subtree rooted at a given index i in a vector of integers of a given size.
Sort: void overriding function that sorts a vector of integers in ascending order using heap sort.
Model: void overriding function to calculate the expected time complexity of heap sort based on its mathematical model.



Class: TreeSort
Description: Implementation of the tree sort algorithm, which uses a binary search tree to sort a collection of integers. 
Properties: none
Methods:
Node: a constructor for the Node class that sets the node's value to the given value and initializes its left and right pointers to nullptr.
Insert: a recursive function that inserts a new node with the given value into the binary search tree rooted at root. If root is null, a new node is created and returned. Otherwise, the function traverses the tree and recursively inserts the node into the appropriate subtree.
TraverseInOrder: a recursive function that traverses the binary search tree rooted at root in-order and appends each node's value to the end of the given vector. The function also checks that the vector remains sorted after each node is appended and performs swaps if necessary. The comparisons and swaps properties are updated accordingly. 
Sort: void overriding function that sorts a vector of integers in ascending order using the TreeSort algorithm by constructing a binary search tree and traversing it in-order. 
Model: void overriding function to calculate the expected time complexity of TreeSort based on its mathematical model.


Class: RandomPermutationVectorGenerator
Description: Utility class for generating random permutation vectors of the first N integers
Properties: None
Methods:
- GenerateVector: Generates a random permutation vector of size N, where N is the input parameter 'size'. Returns the generated vector.

Class: SortTester
Description: Utility class for testing sorting algorithms using random permutation arrays of various sizes
Properties: none
Methods:
TestSortingAlgorithm: void, tests the specified sorting algorithm using random permutation arrays of sizes 1000, 2000, 3000, 5000, 7000, and 10000, outputs the number of element comparisons, model expected, number of swaps, and elapsed time for each test.


This program defines several sorting algorithms by creating classes with methods and properties that implement the respective algorithm. The base class is called `SortingAlgorithm` and defines the common interface for all sorting algorithms. It includes properties such as the name of the algorithm, the number of comparisons and swaps performed during sorting, and the expected time complexity of the algorithm. It also defines methods to sort a vector of integers, get the number of comparisons and swaps, and calculate the expected time complexity.

The `SelectionSort`, `InsertionSort`, `MergeSort`, `QuickSortFirstPivot`, and `QuickSortRandomPivot` classes inherit from the `SortingAlgorithm` base class and implement the respective sorting algorithms. Each class has its own constructor to initialize the properties and name of the algorithm. The `Sort` method overrides the base class method to perform the respective sorting algorithm. The `Model` method overrides the base class method to calculate the expected time complexity of the algorithm.

`SelectionSort` repeatedly selects the smallest element from the unsorted portion of the vector and swaps it with the first element in the unsorted portion. `InsertionSort` iterates through the unsorted portion of the vector and inserts each element into its correct position in the sorted portion of the vector. `MergeSort` divides the unsorted list into n sublists, each containing one element, and then repeatedly merges sublists to produce new sorted sublists until there is only one sublist remaining. `QuickSortFirstPivot` partitions the vector into two parts using the first element as the pivot and then recursively applies the same process to each of the two parts until the vector is sorted. `QuickSortRandomPivot` partitions the vector into two parts using a randomly chosen pivot and then recursively applies the same process to each of the two parts until the vector is sorted.
