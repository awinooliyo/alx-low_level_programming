# 0x1E. C - Search Algorithms Task Solutions
**Linear Search**
* Linear Search is a sequential search algorithm that starts at one end and goes through every element of a list or array until the desired element is found, or else it continues searching until the end of the data set.
* The linear search algorithm is effective for small data sets.
* In linear search, each element of a list or array is considered a potential match for key and checked for the same.
* If an element is equal to the key, the search is successful and the index of that element is returned.
* If no element is found equal to the key, the search yields a no match found.
* In the best case, the key might be present at the first index, meaning the best case complexity is O(1).
* In the worst case, the key might be present in the last index, meaning the worst case complexity is O(N).
* The average case of linear search is O(N).
**Binary Search**
* Binary search is a searching algorithm used to sort an array repeatedly by dividing the search interval into half. It is mainly used to search information in a sorted array to reduce time complexity to O(log n).
* Binary search algorithm is mostly applicable to data structure that is sorted.
* Access to any element of the data structure takes a constant time. 
* To get the mid point of the half of the search interval use: mid = start + (end -start)//2
* You then compare the middle element of the search wspace with the key or target.
* If the key is in the middle element, the process terminated.
* if the key is not found in the middle element, choose the potential half where it might be.
* * Again if the key is smaller than the middle element, the left side is used for the next search.
* * If the key is grater than the middle element, the right side is utilized for the next search.
* The process is repeated until the key is found or the total search space is exhausted.
* Binary search can be implemented iteratively or recursively.
* The time complexity of binary search is O(1) in the best case scenario, when the array[mid] == target value.
* The average case complexity of binary search is O(log n).
* The worse case complexity is O(log N), where N is the size of the array.
* The auxiliary space of binary search is O(1). However, if you consider the recursive call stack, it becomes O(logN)
* Binary search is faster than linear search, especially for large arrays.
* It is also more efficient compared to other searching algorithms with the same time complexity such as interpolation or exponential search.
* It is best-suited for searching large data sets that are sorted in external memory such as hard drive or cloud.
