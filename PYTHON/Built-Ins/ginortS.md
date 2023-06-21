### [ginortS](https://www.hackerrank.com/challenges/ginorts/problem?isFullScreen=true)

## Method 1:

<hr>

## Explanation:
- This one-liner solution takes an input string, sorts it according to the specified criteria, and prints the sorted string. The `sorted()` function takes two arguments: the input string and a `key` function that specifies the sorting criteria. The `key` function is a lambda function that takes a character `c` as input and returns a tuple of three values that determine the sorting order of the character.
- The first value in the tuple is `c.isdigit() - c.islower()`. This value will be -1 for lowercase letters, 0 for uppercase letters, and 1 for digits. This ensures that all sorted lowercase letters are ahead of uppercase letters, and all sorted uppercase letters are ahead of digits.
- The second value in the tuple is `c in '02468'`. This value will be `True` for even digits and `False` for all other characters. This ensures that all sorted odd digits are ahead of sorted even digits.
- The third value in the tuple is simply `c`, which means that characters with the same sorting criteria (e.g., two lowercase letters or two odd digits) will be sorted in ascending order according to their ASCII values.
- Finally, the `print()` function prints out the sorted characters using the `*` operator to unpack the list of characters returned by the `sorted()` function. The `sep=''` argument specifies that there should be no separator between the characters when they are printed.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this one-liner solution is O(n log n), where n is the length of the input string. This is because the `sorted()` function uses the Timsort algorithm, which has an average-case time complexity of O(n log n).

### `Space Complexity`:
The space complexity of this solution is O(n), where n is the length of the input string. This is because the `sorted()` function creates a new list of characters to store the sorted result, which takes up O(n) space. Additionally, the lambda function used as the `key` argument creates a tuple for each character in the input string, which also takes up O(n) space.

## Code:
```py
# Taking input ,sorting and printing in one line
print(*sorted(input(), key=lambda c: (c.isdigit() - c.islower(), c in '02468', c)), sep='')
```

<hr>
Method - 2
<hr>

## Explanation:

## Time and Space Complexity:
### `Time Complexity`:


### `Space Complexity`:


## Code:
```py

```
