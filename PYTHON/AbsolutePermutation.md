### [Absolute Permutation](https://www.hackerrank.com/challenges/absolute-permutation/problem)

## Key Insights:
The absolutePermutation function takes two integers n and k as input and returns a list of n integers representing the absolute permutation<br>
of the numbers from 1 to n, if possible. An absolute permutation is defined as a permutation of the numbers from 1 to n<br> 
where each number i in the permutation is at a distance of k from i in the original list. If there is no absolute permutation possible,<br> 
it returns [-1].<br>
The function first creates a list of numbers from 1 to n+1 using the list and range functions.<br>
If k is 0, the original list is already an absolute permutation, so the function returns the list without modification.<br>
If n is odd, there can be no absolute permutation, so the function returns [-1].<br>
The function then loops through the list from index 1 to n-k and swaps the numbers at indices i and i+k if their difference is k.<br> 
If the difference between i and numList[i] is not equal to k, there can be no absolute permutation, so the function returns [-1].<br>
The function then loops through the list from index n-k+1 to n and checks if the difference between i and numList[i] is not equal to k.<br> 
If it is not, there can be no absolute permutation, so the function returns [-1].<br>
If an absolute permutation is possible, the function returns the list of numbers from 1 to n in the new order.<br>
The main part of the code takes input from the user, calls the absolutePermutation function for each test case,<br> 
and prints the result using the print function.<br>

## Code:
```python
def absolutePermutation(n, k):
    """
    This function takes two integers n and k as input and returns a list of n integers representing the absolute permutation
    of the numbers from 1 to n, if possible. An absolute permutation is defined as a permutation of the numbers from 1 to n
    where each number i in the permutation is at a distance of k from i in the original list.
    If there is no absolute permutation possible, it returns [-1].
    """
    
    # Create a list of numbers from 1 to n+1
    numList = list(range(n+1))
    
    # If k is 0, the original list is already an absolute permutation
    if k == 0:
        return numList[1:]
    
    # If n is odd, there can be no absolute permutation
    if n % 2 != 0:
        return [-1]
    
    # For i from 1 to n-k, swap the numbers i and i+k if their difference is k
    for i in range(1,n-k+1):
        if numList[i] + k == numList[i+k]:
            numList[i],numList[i+k] = numList[i+k],numList[i]
        # If the difference between i and numList[i] is not equal to k, there can be no absolute permutation
        elif abs(numList[i]-i) != k:
            return [-1]
    
    # For i from n-k+1 to n, if the difference between i and numList[i] is not equal to k, there can be no absolute permutation
    for i in range(n-k+1,n+1):
        if abs(numList[i]-i) != k:
            return [-1]
    
    # If an absolute permutation is possible, return the list of numbers from 1 to n in the new order
    return numList[1:]

# Take input from the user
t = int(input())

# For each test case, call the absolutePermutation function and print the result
for i in range(t):
    n , k = [int(x) for x in input().split()]
    res = absolutePermutation(n,k)
    print(" ".join(map(str,res)))

```

    
