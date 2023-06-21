### [Triangle Quest 2](https://www.hackerrank.com/challenges/triangle-quest-2/problem?isFullScreen=true)

## Key Insights:
One the first line we take (1)<sup>2</sup> , on the second line we take (11)<sup>2</sup>) , on the third line we take 
(111)<sup>2</sup>) , on the fourth (1111)<sup>2</sup> and so on

## Brief Description:
This code appears to be a Python program that takes in a single integer as input and then prints out a sequence of numbers. The main logic of the code can be summarized in the following points:
1. The code takes in a single integer as input and assigns it to a variable `n`.
2. The code then iterates through the range of numbers from 1 to `n` inclusive.
3. For each iteration, the code calculates the value of the expression `((10 ** i - 1)//9)** 2`, where `i` is the current iteration number, and prints out the result.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n), where n is the value of the input integer. This is because the code iterates through the range of numbers from 1 to `n` inclusive once.

### `Space Complexity`:
The space complexity of this code is O(1), because the code uses a constant amount of memory regardless of the value of the input integer.

## Code:
```py
for i in range(1,int(input())+1): 
    print(((10 ** i - 1)//9)** 2)
```
