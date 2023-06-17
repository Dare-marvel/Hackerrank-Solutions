### [itertools.combinations_with_replacement()](https://www.hackerrank.com/challenges/itertools-combinations-with-replacement/problem?isFullScreen=false)

## Explanation:
This code is a Python script that computes all `k`-length combinations with replacement of a string `S` and prints them in lexicographic sorted order. Here's how it works:

1. The `combinations_with_replacement` function from the `itertools` module is imported.
2. The string `S` and the integer `k` are taken as space-separated inputs from the user. `k` is converted to an integer using the `int` function.
3. The string `S` is converted to a list of characters and sorted in lexicographic order using the `sort` method.
4. The `combinations_with_replacement` function is called with `S` and `k` as arguments and returns an iterator over all `k`-length combinations with replacement of `S`.
5. The iterator is converted to a list and each tuple in the list is joined into a string using the `join` method and printed on a new line.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n^k) where n is the length of the string `S`.

### `Space Complexity`:
The space complexity is also O(n^k) due to the creation of the list containing all combinations with replacement.

## Code:
```py
from itertools import combinations_with_replacement

S , k = input().split()
k = int(k)
S = list(S)
S.sort()

for item in (list(combinations_with_replacement(S,k))): 
    print("".join(item))
```
