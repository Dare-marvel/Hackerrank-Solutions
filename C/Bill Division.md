## [Bill Division](https://www.hackerrank.com/challenges/bon-appetit/problem)

## Explanation:
The main logic of this C program can be summarized in the following points:
1. The program takes in two integer inputs `n` and `k` representing the number of items and the index of the item that Anna did not eat, respectively.
2. The program creates an array `bill` of size `n`.
3. The program reads in `n` integer inputs representing the prices of the items and stores them in the array `bill`.
4. The program reads in an integer input `bc` representing the bill charged to Anna.
5. The program initializes a variable `ba1` to `0`.
6. The program uses a for loop to iterate from `0` to `n`.
7. For each value of `j`, the program checks if `j` is not equal to `k`.
8. If it is not, the program adds the value at index `j` of the array `bill` to the value of `ba1`.
9. After all iterations have been completed, the program calculates the value of `ba2` by dividing the value of `ba1` by 2.
10. The program checks if the value of `ba2` is equal to the value of `bc`.
11. If it is, the program outputs "Bon Appetit".
12. If it is not, the program checks if the value of `bc` is greater than the value of `ba2`.
13. If it is, the program outputs the difference between the values of `bc` and `ba2`.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n) because it uses a for loop that iterates over `n` elements.

### `Space Complexity`:
The space complexity is O(n) because it uses an array of size `n` to store the prices of the items.

## Code:
```c
#include <stdio.h>

int main()
{
    int n, k, i, j, ba1 = 0, ba2, bc;
    // printf("Enter the number of items:");
    scanf("%d", &n);
    int bill[n];
    // printf("Enter the item that anna did'nt eat");
    scanf("%d", &k);
    // printf("Enter the prices of respective items:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bill[i]);
    }
    // printf("Enter the bill charged:");
    scanf("%d", &bc);
    for (j = 0; j < n; j++)
    {
        if (j != k)
        {
            ba1 += bill[j];
        }
    }
    ba2 = ba1 / 2;
    if (ba2 == bc)
        printf("Bon Appetit");
    else if (bc > ba2)
        printf("%d", bc - ba2);
    return 0;
}
```
