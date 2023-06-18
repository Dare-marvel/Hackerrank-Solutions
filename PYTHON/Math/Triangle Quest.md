### [Triangle Quest](https://www.hackerrank.com/challenges/python-quest-1/problem?isFullScreen=false)

## Key Insights:
Basically we need to multiply each number say `n` by `1111....n` , so for that we use the formula : ( 10<sup>n</sup> - 1 ) / 9 , so that we get the desired result

## Time and Space Complexity:
`Time Complexity`:
The time complexity of this code is O(n) because the loop runs n times.

`Space Complexity`:
The space complexity is O(1) because the memory usage does not depend on the size of the input.

## Code:
```py
for i in range(1,int(input())):
    print(i*((10**i-1)//9))
```
