### [No Idea!](https://www.hackerrank.com/challenges/no-idea/problem?isFullScreen=false)

## Explanation:
The main logic of the code can be summarized in the following points:
1. The code takes in three lines of input: the first line contains two integers `n` and `m`, the second line contains `n` integers representing the elements in an array `arr`, and the third and fourth lines contain `m` integers representing the elements in sets `A` and `B`, respectively.
2. The code initializes a variable `happiness` to 0 and then iterates through each element in the array `arr`.
3. If an element is found in set `A`, the happiness variable is incremented by 1. If an element is found in set `B`, the happiness variable is decremented by 1.
4. Finally, the code prints out the final value of the happiness variable.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n), where n is the number of elements in the array `arr`. 
This is because the code iterates through each element in the array once.

### `Space Complexity`:
The space complexity of the code takes into account the memory used to store these inputs as well as any additional variables or data structures used by the code. In this case, the space complexity is O(n + m) because 
the code stores the array `arr` and the sets `A` and `B` in memory, and the size of these data structures is determined by the values of `n` and `m`.

## Code:
```py
# Take two integers as input and assign them to variables n and m
n , m = [int(x) for x in input().split()]

# Initialize an empty list, two empty sets, and a variable to track happiness
arr = []
A = set()
B = set()
happiness = 0

# Take n integers as input and assign them to the list arr
arr = list(map(int,input().split()))

# Take m integers as input and assign them to the set A
A = set(map(int,input().split()))

# Take m integers as input and assign them to the set B
B = set(map(int,input().split()))    

# Iterate through each element in the list arr
for i in range(n):
    # If the element is in set A, increment the happiness variable by 1
    if arr[i] in A:
        happiness += 1
    # If the element is in set B, decrement the happiness variable by 1
    elif arr[i] in B:
        happiness -= 1
    
# Print out the final value of the happiness variable
print(happiness)

```
