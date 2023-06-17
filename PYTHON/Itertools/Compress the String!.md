### [Compress the String!](https://www.hackerrank.com/challenges/compress-the-string/problem?isFullScreen=false)

## Explanation:
This code is a Python script that groups consecutive occurrences of the same character in a string `S` and prints the count and value of each group. Here's how it works:

1. The `groupby` function from the `itertools` module is imported.
2. The string `S` is taken as input from the user.
3. The `groupby` function is called with `S` as an argument and returns an iterator over the groups of consecutive occurrences of the same character in `S`.
4. For each group `g` and its key `k`, the count of `k` in the list of elements in `g` is computed using the `count` method and printed along with the value of `k` in the format `(count, value)`.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n) where n is the length of the string `S`.

### `Space Complexity`:
The space complexity is O(n) due to the creation of the list of elements in each group.

## Code:
```py
import itertools

S = input()

x = itertools.groupby(S)
for k,g in x:
    print(f"({list(g).count(k)}, {k}) ",end="")
```
