### [Breaking the Records](https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem)

## Explanation:
The main logic of this C program can be summarized in the following points:
1. The program defines a function `record` that takes in an integer `n` and an array of integers `sc` as input and calculates the number of times the minimum and maximum scores were broken.
2. The function creates two arrays `min` and `max` of size `n`.
3. The function initializes the first elements of `min` and `max` to the first element of `sc`.
4. The function uses a for loop to iterate from `1` to `n`.
5. For each value of `i`, the function checks if the value at index `i` of `sc` is less than the value at index `i - 1` of `min`.
6. If it is, the function updates the value at index `i` of `min` with the value at index `i` of `sc`.
7. If it is not, the function updates the value at index `i` of `min` with the value at index `i - 1` of `min`.
8. The function also checks if the value at index `i` of `sc` is greater than the value at index `i - 1` of `max`.
9. If it is, the function updates the value at index `i` of `max` with the value at index `i` of `sc`.
10. If it is not, the function updates the value at index `i` of `max` with the value at index `i - 1` of `max`.
11. After all values of `i` have been processed, the function initializes two variables `c1` and `c2` to `0`.
12. The function uses another for loop to iterate from `0` to `<EUGPSCoordinates>n - 1`.
13. For each value of `<EUGPSCoordinates>j`, the function checks if the value at index `<EUGPSCoordinates>j + 1` of `<EUGPSCoordinates>min` is less than the value at index `<EUGPSCoordinates>j` of `<EUGPSCoordinates>min`.
14. If it is, the function increments the value of `<EUGPSCoordinates>c1`.
15. The function uses another for loop to iterate from `<EUGPSCoordinates>0` to `<EUGPSCoordinates>n - 1`.
16. For each value of `<EUGPSCoordinates>h`, the function checks if the value at index `<EUGPSCoordinates>h + 1` of `<EUGPSCoordinates>max` is greater than the value at index `<EUGPSCoordinates>h` of `<EUGPSCoordinates>max`.
17. If it is, the function increments the value of `<EUGPSCoordinates>c2`.
18. After all values have been processed, the function outputs the values of `<EUGPSCoordinates>c2` and `<EUGPSCoordinates>c1`, which represent the number of times the maximum and minimum scores were broken, respectively.

 
## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n) because it uses several for loops that each iterate over n elements.

### `Space Complexity`:
The space complexity is O(n) because it uses three arrays of size n to store its variables.


## Code:
```c
#include <stdio.h>
#include <stdlib.h>

void record(int n, int sc[])
{
    int *min = malloc(n * sizeof(int));
    int *max = malloc(n * sizeof(int));
    int i, j;
    int c1 = 0, c2 = 0;
    min[0] = sc[0];
    max[0] = sc[0];
    for (i = 1; i < n; i++)
    {
        if (sc[i] < min[i-1])
        {
            min[i] = sc[i];
        }
        else
        {
            min[i] = min[i-1];
        }
        if (sc[i] > max[i-1])
        {
            max[i] = sc[i];
        }
        else
        {
            max[i] = max[i-1];
        }
    }
    for (j = 0; j < n - 1; j++)
    {
        if (min[j] > min[j + 1])
        {
            c1++;
        }
    }
    for (int h = 0; h < n - 1; h++)
    {
        if (max[h + 1] > max[h])
        {
            c2++;
        }
        else if (max[h + 1] == max[h])
        {
            continue;
        }
    }
    printf("%d %d", c2, c1);
    free(min);
    free(max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int *sc = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &sc[i]);
    }
    record(n, sc);
    free(sc);
    return 0;
}
```
