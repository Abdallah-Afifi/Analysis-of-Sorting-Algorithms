# Time Complexity 

# Introduction

Time complexity is an important concept in computer science that measures the efficiency of an algorithm.
It is a measure of the amount of time it takes for an algorithm to complete as the size of the input grows. 
The time complexity of an algorithm can be expressed in terms of the number of basic operations performed by the algorithm as a function of the size of the input.

# Big O Notation

Big O notation is a mathematical notation used to describe the time complexity of an algorithm. 
It provides an upper bound on the growth rate of an algorithm's time complexity as the size of the input grows. 
In other words, it describes the worst-case time complexity of an algorithm. 
Big O notation is denoted by O(f(n)), where f(n) is a function that describes the growth rate of the algorithm as a function of the size of the input.

# Common Time Complexities

O(1): Constant Time Complexity
An algorithm with constant time complexity takes the same amount of time to complete, regardless of the size of the input. This means that the number of basic operations performed by the algorithm is independent of the size of the input.

O(log n): Logarithmic Time Complexity
An algorithm with logarithmic time complexity takes less time to complete as the size of the input grows. This means that the number of basic operations performed by the algorithm grows logarithmically with the size of the input.

O(n): Linear Time Complexity
An algorithm with linear time complexity takes more time to complete as the size of the input grows. This means that the number of basic operations performed by the algorithm grows linearly with the size of the input.

O(n^2): Quadratic Time Complexity
An algorithm with quadratic time complexity takes even more time to complete as the size of the input grows. This means that the number of basic operations performed by the algorithm grows quadratically with the size of the input.

O(2^n): Exponential Time Complexity
An algorithm with exponential time complexity takes a very long time to complete as the size of the input grows. This means that the number of basic operations performed by the algorithm grows exponentially with the size of the input.

# Best, Worst, and Average Case Time Complexity

In addition to the concept of big O notation, it is also important to consider the best-case, worst-case, and average-case time complexity of an algorithm.

The best-case time complexity is the minimum amount of time it takes for an algorithm to complete, given a particular input. This occurs when the input is already sorted, for example.

The worst-case time complexity is the maximum amount of time it takes for an algorithm to complete, given a particular input. This occurs when the input is in reverse order, for example.

The average-case time complexity is the expected amount of time it takes for an algorithm to complete, given a random input. This can be difficult to calculate and often requires probabilistic analysis.

# Conclusion

Time complexity is an important concept in computer science that measures the efficiency of an algorithm. 
It is expressed using big O notation, which provides an upper bound on the growth rate of an algorithm's time complexity. 
The best-case, worst-case, and average-case time complexity of an algorithm should also be considered when analyzing the efficiency of an algorithm. 
In C++, time complexity can be calculated using various techniques such as measuring the number of basic operations or using the built-in clock function to measure execution time.

# Reference 

https://www.geeksforgeeks.org/time-complexity-and-space-complexity/

https://www.geeksforgeeks.org/understanding-time-complexity-simple-examples/
