# Detailed Architecture Design of Classes 

Class: SortingAlgorithm
Description: Base class for sorting algorithms, defines the interface that all sorting algorithms must implement
Properties:
Name: string, the name of the sorting algorithm
Comparisons: int, the number of element comparisons performed during the last sort operation
Methods:
Sort: void, sorts an array of integers in ascending order, updates the Comparisons property

Class: SelectionSort
Description: Implementation of the selection sort algorithm, which repeatedly selects the smallest element from the unsorted portion of the array and swaps it with the first element in the unsorted portion
Properties: none
Methods:
Sort: void, sorts an array of integers in ascending order using selection sort

Class: InsertionSort
Description: Implementation of the insertion sort algorithm, which builds a sorted array by iteratively inserting each element into its proper position in the sorted portion of the array
Properties: none
Methods:
Sort: void, sorts an array of integers in ascending order using insertion sort

Class: MergeSort
Description: Implementation of the merge sort algorithm, which recursively divides the array into two halves, sorts each half, and merges the sorted halves back together
Properties: none
Methods:
Sort: void, sorts an array of integers in ascending order using merge sort

Class: QuickSort
Description: Implementation of the quicksort algorithm, which partitions the array around a chosen pivot element and recursively sorts the two resulting sub-arrays
Properties:
PivotChoice: enumeration, indicates the method used to choose the pivot element (e.g. first element, random element, etc.)
Methods:
Sort: void, sorts an array of integers in ascending order using quicksort with the specified pivot choice

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
