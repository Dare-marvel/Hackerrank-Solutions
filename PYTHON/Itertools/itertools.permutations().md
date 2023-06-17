[itertools.permutations()](https://www.hackerrank.com/challenges/itertools-permutations/problem?isFullScreen=false)

## Explanation:
This code is a Python script that computes all `k`-length permutations of a string `S` and prints them in lexicographic sorted order. Here's how it works:

1. The `permutations` function from the `itertools` module is imported.
2. The string `S` and the integer `k` are taken as space-separated inputs from the user. `k` is converted to an integer using the `int` function.
3. The `permutations` function is called with `S` and `k` as arguments and returns an iterator over all `k`-length permutations of `S`.
4. The iterator is converted to a list, sorted in lexicographic order, and each tuple in the list is joined into a string using the `join` method and printed on a new line.

## Time and Space Compexity:
### `Time Complexity`:
The time complexity of this code is O(n!/(n-k)!) where n is the length of the string `S`.

### `Space Complexity`:
The space complexity is also O(n!/(n-k)!) due to the creation of the list containing all permutations.

## Code:
```py
from itertools import permutations

S , k = input().split()
k = int(k)

for item in sorted(list(permutations(S,k))): 
    print("".join(item))
```
