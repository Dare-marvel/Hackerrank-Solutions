### [Merge The Tools!](https://www.hackerrank.com/challenges/merge-the-tools/problem?isFullScreen=false)

## Explanation:
This code defines two functions: `remove_duplicate` and `merge_the_tools`. Here's what each function does:

1. `remove_duplicate` takes a string as input and returns a new string with all duplicate characters removed. It does this by iterating over each character in the input string and adding it to a result list if it hasn't been seen before. The time complexity of this function is O(n) where n is the length of the input string, and the space complexity is also O(n) since it uses a set to keep track of seen characters.

2. `merge_the_tools` takes a string and an integer k as input. It first divides the input string into substrings of length k and stores them in a list. Then, it iterates over each substring and prints its non-duplicate version by calling the `remove_duplicate` function. The time complexity of this function is O(n) where n is the length of the input string, and the space complexity is also O(n) since it uses a list to store the substrings.

Overall, the main logic of this code is to divide an input string into substrings of length k and print their non-duplicate versions.


## Time and Space Compexity:
### `Time Complexity`:
The time complexity of this code is actually O(n^2) because it calls the `merge_the_tools()` function, which 
has a time complexity of O(n^2) because it uses a for loop to iterate over each substring of length `k` in the 
input string and calls the `remove_duplicate()` function for each substring, which has a time complexity of O(k) because 
it iterates over each character in the substring once to remove duplicate characters. Since k can be at most n, the
overall time complexity is O(n^2). 

### `Space Complexity`:
The space complexity is still O(n) because it uses a list of size n/k to store the substrings and a set and a list of size k to store intermediate results.

## Code:
```py
def remove_duplicate(string):
    # Initialize an empty list to store the result and an empty set to keep track of seen characters
    res = []
    seen = set()
    # Iterate over each character in the input string
    for char in string:
        # If the character has not been seen before, add it to the result and mark it as seen
        if char not in seen:
            res.append(char)
            seen.add(char)
    # Return the result as a string
    return ''.join(res)

def merge_the_tools(string, k):
    # Initialize an empty list to store the substrings
    substrList = []
    n = len(string)
    # Divide the input string into substrings of length k and add them to the list
    for i in range(0,n,k):
        substrList.append(string[i:i+k])
        
    # Iterate over each substring and print its non-duplicate version
    for sub in substrList:
        print(remove_duplicate(sub))
        
if __name__ == '__main__':
    # Take user input for the string and k
    string, k = input(), int(input())
    # Call the merge_the_tools function with the given input
    merge_the_tools(string, k)

```
