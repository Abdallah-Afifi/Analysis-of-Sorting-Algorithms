# Bucket Sort

Bucket sort is a sorting algorithm that is used to sort an array or list of elements. 
It is also known as bucket sort or bin sort, and it is a distribution sort. 
Bucket sort works by dividing an array into a number of smaller buckets, and then each bucket is sorted individually. 
After sorting each bucket, the sorted buckets are merged back into the original array to get the final sorted array.

The basic idea of bucket sort is to distribute the elements of an array into a number of buckets. 
Each bucket is then sorted individually, either by using another sorting algorithm or by recursively using bucket sort. 
Finally, the sorted buckets are merged back into the original array to get the final sorted array.

# The algorithm of bucket sort

Create n empty buckets, where n is the number of elements in the input array.

Iterate through the input array and add each element to the appropriate bucket based on its value.

Sort each bucket individually, either by using another sorting algorithm or by recursively using bucket sort.

Merge the sorted buckets back into the original array.

# Time complexity

Bucket sort is O(n+k), where n is the number of elements in the input array, and k is the number of buckets used. 
The space complexity of bucket sort is O(n+k), since we need to create n buckets and maintain a separate list of elements for each bucket.

One advantage of bucket sort is that it is very efficient when the input elements are uniformly distributed over a range. 
In such cases, bucket sort can achieve linear time complexity. 
However, bucket sort is not suitable for sorting data that is not uniformly distributed.
