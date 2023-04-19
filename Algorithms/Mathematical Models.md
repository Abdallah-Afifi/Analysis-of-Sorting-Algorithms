# Mathematical Models for Average Case

# Selection Sort 

(n-1) + (n-2) + ... + 1 = n(n-1)/2

T(n) = O(n^2)

# Insertion Sort 

1/2 + 2/2 + 3/2 + ... + (n-1)/2 = (n-1)^2/4

T(n) = O(n^2)

# Merge Sort 

2(n/2) + 4(n/4) + 8(n/8) + ... + n(1/n) = n log n

T(n) = O(n log n)

# Quick Sort First Element 

T(n) = 2T(n/2) + O(n) = O(n log n)

# Quick Sort Random Element 

T(n) = 2T(n/2) + O(n) = O(n log n)

# Quick Sort Median Element 

T(n) = 2T(n/2) + O(n) = O(n log n)

# Bubble Sort 

The number of comparisons is n/2 * (n-1).

The number of swaps is n/4 * (n-1).

Therefore, the total number of comparisons and swaps required to sort the array is O(n^2).

# Counting Sort 

O(n + k), where n is the number of elements in the input array and k is the range of values that the input elements can take.

# Heap Sort 

O(n log (n/2)) which simplifies to: O(n log n)

# Shell Sort 

T(n) = O(n^(3/2))

# Tree Sort 

T(n) = O(n log n)
