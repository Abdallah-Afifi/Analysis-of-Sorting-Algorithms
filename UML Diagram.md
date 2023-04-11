# UML Digarm        

SortingAlogritm is the abstract class. Each sorting algorithm class inherits from the abstract class. 
The other classes are being used by the sorting algorithms classes. 
The relationship between SortTester and the sorting algorithm classes is one of aggregation. This means that SortTester contains instances of the sorting algorithm classes as member variables, and uses them to test their sorting methods. However, the sorting algorithm classes can exist independently of SortTester and can be used in other contexts as well.
The relationship between RandomPermutationArrayGenerator and the sorting algorithm classes (SelectionSort, InsertionSort, MergeSort, and QuickSort) is one of composition. This means that the RandomPermutationArrayGenerator is an essential part of the SortTester class, which uses it to generate random permutation arrays for testing the sorting algorithms.




           +------------------------+
           |   SortingAlgorithm     |
           +-----------------------+
           | - name: string         |
           | - comparisons: int     |
           +-----------------------+
           | + Sort(): void         |
           +-----------------------+
                   /_\
                    |
           +-----------------------+
           |     SelectionSort     |
           +-----------------------+
           |                         |
           +-----------------------+
           | + Sort(): void         |
           +-----------------------+
                    /_\
                     |
           +-----------------------+
           |     InsertionSort     |
           +-----------------------+
           |                         |
           +-----------------------+
           | + Sort(): void         |
           +-----------------------+
                    /_\
                     |
           +-----------------------+
           |       MergeSort       |
           +-----------------------+
           |                         |
           +-----------------------+
           | + Sort(): void         |
           +-----------------------+
                    /_\
                     |
           +-----------------------+
           |       QuickSort       |
           +-----------------------+
           | - pivotChoice: enum    |
           +-----------------------+
           | + Sort(): void         |
           +-----------------------+
                 
                                                                                                              +-----------------------+
                                                                                                              | RandomPermutationArray|
                                                                                                              +-----------------------+
                                                                                                              |                        |
                                                                                                              +-----------------------+
                                                                                                              | + GenerateArray(): int[]|
                                                                                                              +-----------------------+
                   
                                                                                                              +-----------------------+
                                                                                                              |       SortTester      |
                                                                                                              +-----------------------+
                                                                                                              |                        |
                                                                                                              +-----------------------+
                                                                                                              | + TestSortingAlgorithm()|
                                                                                                              +-----------------------+
