### [DefaultDict Tutorial](https://www.hackerrank.com/challenges/defaultdict-tutorial/problem?isFullScreen=false)

## Explanation:
This code checks for each string in group B if it appears in group A and prints the indices of its occurrences in group A. Here is the main logic of the code:

1. The code reads the number of strings in group A and group B.
2. The code creates a defaultdict with list as the default factory. This defaultdict will store the list of indices for each string in group A.
3. The code then loops through each string in group A and reads the string. It appends the index of the string to the list of indices for that string in grpA.
4. The code then loops through each string in group B and reads the string.
5. The code checks if the string is in grpA by checking if it is a key in grpA.
6. If the string is in grpA, the code prints the list of indices joined by space.
7. If the string is not in grpA, the code prints -1.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n + m) where n is the number of strings in group A and m is the number of strings in group B since it loops through each string in group A and group B once.

### `Space Complexity`:
The space complexity is O(n) where n is the number of strings in group A since it stores a defaultdict with n elements.

## Code:
```py
from collections import defaultdict

# Read the number of strings in group A and group B
n , m = [int(x) for x in input().split()]

# Create a defaultdict with list as the default factory
grpA = defaultdict(list)

# Loop through each string in group A
for i in range(1,n+1):
    # Read the string and append its index to the list of indices for that string in grpA
    grpA[input()].append(str(i))

# Loop through each string in group B
for _ in range(m):
    # Read the string
    item = input()
    
    # Check if the string is in grpA
    if item in grpA:
        # If yes, print the list of indices joined by space
        print(" ".join(grpA[item]))
    else:
        # If no, print -1
        print(-1)

```
