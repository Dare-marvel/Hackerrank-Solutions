### [itertools.combinations()](https://www.hackerrank.com/challenges/itertools-combinations/problem?isFullScreen=false)

## Explanation:
This code is a Python script that computes all combinations of length 1 to `k` of a string `S` and prints them in lexicographic sorted order. Here's how it works:

1. The `combinations` function from the `itertools` module is imported.
2. The string `S` and the integer `k` are taken as space-separated inputs from the user. `k` is converted to an integer using the `int` function.
3. The string `S` is converted to a list of characters and sorted in lexicographic order using the `sort` method.
4. For each value of `n` from 1 to `k`, the `combinations` function is called with `S` and `n` as arguments and returns an iterator over all `n`-length combinations of `S`.
5. The iterator is converted to a list and each tuple in the list is joined into a string using the `join` method and printed on a new line.

## Time and Space Compexity:
### `Time Complexity`:
The time complexity of this code is O(2^n) where n is the length of the string `S`.

### `Space Complexity`:
The space complexity is also O(2^n) due to the creation of the list containing all combinations.

## Code:
```py
from itertools import combinations

S , k = input().split()
k = int(k)
S = list(S)
S.sort()

for n in range(1,k+1):
    for item in (list(combinations(S,n))): 
        print("".join(item))
```
