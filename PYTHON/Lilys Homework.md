## [Lilys Homework](https://www.hackerrank.com/challenges/lilys-homework/problem)

## Explanation:
This code is a Python program that calculates the minimum number of swaps required to sort a given array in ascending or descending order. Here's how it works:

1. The program defines a function `NumbSwaps()` that takes an array `arr` as input and returns the minimum number of swaps required to sort the array in ascending order.
2. The function creates a dictionary `indexMap` to store the indices of each element in the input array and a sorted copy of the input array `sortedArray`.
3. It then iterates over each element in the input array using a for loop and checks if it is equal to the corresponding element in the sorted array. If it is not, the function increments a counter `res` and swaps the current element with the element that should be in its position according to the sorted array using a formula.
4. The program takes an integer `n` as input from the user, representing the number of elements in the array, and an array `arr` of size `n`.
5. It then calls the `NumbSwaps()` function twice, once with the original array and once with its reverse, to calculate the minimum number of swaps required to sort the array in ascending or descending order respectively.
6. Finally, it prints the minimum of the two results.

## Time and Space Compexity:
### `Time Complexity`:
The time complexity of this code is O(n^2) because it calls the `NumbSwaps()` function twice, which has a time complexity of O(n^2) because 
it iterates over each element in the input array once and performs a swap operation for each out-of-place element.

### `Space Complexity`:
The space complexity is O(n) because it uses a dictionary and a sorted copy of size n to store intermediate results.

## Code:
```py
def NumbSwaps(arr):
    indexMap={}
    for i in range(len(arr)):
        indexMap[arr[i]]=i
        
    sortedArray=sorted(arr)
    res=0
    
    for i in range(len(arr)):
        if arr[i]!=sortedArray[i]:
            res+=1
            #swap_index contains the actual position of first element in the unsorted array
            swap_index=indexMap[sortedArray[i]]
            #This contains the position of unsorted element after swapping the indices
            indexMap[arr[i]]=swap_index
            #Now swap the elements
            arr[i],arr[swap_index]=arr[swap_index],arr[i]
            
    return res

n = int(input().strip())

arr = list(map(int, input().rstrip().split()))

print(min(NumbSwaps(arr[::]),NumbSwaps(arr[::-1])))
```
