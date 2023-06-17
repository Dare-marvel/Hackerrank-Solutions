### [itertools.product()](https://www.hackerrank.com/challenges/itertools-product/problem?isFullScreen=false)

## Explanation:
This code is a Python script that computes the Cartesian product of two lists `A` and `B` and prints the result. Here's how it works:

1. The `product` function from the `itertools` module is imported.
2. Two lists `A` and `B` are created by taking space-separated integer inputs from the user and mapping them to integer values using the `map` function.
3. The `product` function is called with `A` and `B` as arguments and returns an iterator over the Cartesian product of the two lists.
4. The iterator is converted to a list and each tuple in the list is printed on the same line separated by a space.

## Time and Space Compexity:
### `Time Complexity`:
The time complexity of this code is O(n^2) where n is the length of the lists `A` and `B`.

### `Space Complexity`:
The space complexity is also O(n^2) due to the creation of the list containing the Cartesian product.

## Code:
```py
from itertools import product

A = list(map(int, input().split()))  
B = list(map(int, input().split()))  

for item in list(product(A,B)):
    print(f"{item} ",end="")
```
