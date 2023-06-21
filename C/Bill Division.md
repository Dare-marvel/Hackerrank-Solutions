## [Bill Division](https://www.hackerrank.com/challenges/bon-appetit/problem)

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
