### [Standardize Mobile Number Using Decorators](https://www.hackerrank.com/challenges/standardize-mobile-number-using-decorators/problem?isFullScreen=false)

## Explanation:
This code is a Python script that sorts a list of phone numbers in ascending order and formats them according to the Indian standard. Here's how it works:

1. The `wrapper` function takes a function `f` as an argument and returns a new function `fun`.
2. `fun` takes a list of phone numbers `l` as an argument and creates a new list `newl`.
3. For each phone number in `l`, if its length is greater than 10, it finds the starting index `st_idx` of the last 10 digits and appends the formatted phone number to `newl`. Otherwise, it appends the formatted phone number to `newl` directly.
4. The phone numbers are formatted by adding the country code "+91" followed by a space, then the first 5 digits of the phone number followed by another space, and finally the last 5 digits of the phone number.
5. The function `f` is then called with `newl` as an argument.
6. The `sort_phone` function takes a list of phone numbers as an argument, sorts them in ascending order, and prints them one per line.
7. The `wrapper` function is used as a decorator for the `sort_phone` function. This means that when `sort_phone` is called, it's actually calling the `fun` function returned by `wrapper`.
8. In the main block of the code, a list of phone numbers is created by taking input from the user. The `sort_phone` function is then called with this list as an argument.

## Time and Space Compexity:
### `Time Complexity`:
The time complexity of this code is O(n log n) due to the sorting of the phone numbers.

### `Space Complexity`:
 The space complexity is O(n) due to the creation of the new list `newl`.
 
## Code:
```py
def wrapper(f):
    def fun(l):
        newl = []
        # complete the function
        for i in range(len(l)):
            if len(l[i]) > 10:
                st_idx = len(l[i]) % 10
                newl.append("+91 " + l[i][st_idx:st_idx+5]+" "+l[i][st_idx+5:])
            else:
                newl.append("+91 " + l[i][0:5] +" "+ l[i][5:] )   
        f(newl)
    return fun

@wrapper
def sort_phone(l):
    print(*sorted(l), sep='\n')

if __name__ == '__main__':
    l = [input() for _ in range(int(input()))]
    sort_phone(l) 
```
