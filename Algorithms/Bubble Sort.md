# Bubble Sort 

Bubble Sort is a simple comparison-based sorting algorithm that repeatedly steps through the list of elements to be sorted, compares each pair of adjacent items and swaps them if they are in the wrong order. The algorithm gets its name from the way smaller elements "bubble" to the top of the list as the algorithm runs.

Bubble Sort is an elementary sorting algorithm with O(n^2) worst-case and average-case complexity, making it inefficient for large lists. However, it is often used in teaching sorting algorithms due to its simplicity and ease of implementation.

The algorithm works by repeatedly swapping the adjacent elements if they are in the wrong order until no more swaps are needed, indicating that the list is sorted.

The worst-case time complexity of Bubble Sort is O(n^2), where n is the length of the input array. This is because the inner loop always runs n-i-1 times for each value of i, resulting in a total of (n-1) + (n-2) + ... + 1 = n(n-1)/2 comparisons and swaps. The best-case time complexity is O(n), which occurs when the input array is already sorted.

In terms of space complexity, Bubble Sort is an in-place algorithm, meaning it requires no extra space other than the input array. However, it does have a space complexity of O(1) for the swap function.

Bubble Sort has several variants, including Cocktail Sort, which sorts in both directions, and Short Bubble Sort, which stops iterating once the list is sorted, reducing the number of iterations required in the average case. However, even with these optimizations, Bubble Sort remains an inefficient algorithm for large lists and is typically only used for educational purposes.

# References 

https://www.geeksforgeeks.org/bubble-sort/
