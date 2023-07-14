### [Pascal's Triangle](https://www.hackerrank.com/challenges/pascals-triangle/problem?isFullScreen=true)

## Brief Description:

## Key Insights:

## Time and Space Complexity:
### `Time Complexity`:

### `Space Complexity`:

## Code:
```c
#include <stdio.h>

int pas(int r, int c)
{
    if (c == 0 || r == c)
    {
        return 1;
    }
    return pas(r - 1, c - 1) + pas(r - 1, c);
}
void pascal(int k)
{
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", pas(i, j));
        }
        printf("\n");
    }
}
int main()
{
    int k;
    scanf("%d", &k);
    pascal(k);

    return 0;
}
```
