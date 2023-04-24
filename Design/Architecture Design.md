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

Class: QuickSort
Description: Implementation of the quicksort algorithm, which partitions the array around a chosen pivot element and recursively sorts the two resulting sub-arrays
Properties:
PivotChoice: enumeration, indicates the method used to choose the pivot element (e.g. first element, random element, etc.)
Methods:
Sort: void, sorts an array of integers in ascending order using quicksort with the specified pivot choice


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



Class: RandomPermutationArrayGenerator
Description: Utility class for generating random permutation arrays of the first N integers
Properties: none
Methods:
GenerateArray: int[], generates a random permutation array of the first N integers

Class: SortTester
Description: Utility class for testing sorting algorithms using random permutation arrays of various sizes
Properties: none
Methods:
TestSortingAlgorithm: void, tests the specified sorting algorithm using random permutation arrays of sizes 1000, 2000, 3000, 5000, 7000, and 10000, outputs the number of element comparisons for each test and compares them to the expected number based on mathematical modeling of the algorithm
With this class architecture, you can easily add new sorting algorithms by inheriting from the SortingAlgorithm class and implementing the Sort method. You can also add new pivot choice methods to the QuickSort class by adding new enumeration values and implementing the corresponding pivot selection logic. The RandomPermutationArrayGenerator and SortTester classes provide reusable utility functionality for generating test arrays and testing sorting algorithms, respectively.
