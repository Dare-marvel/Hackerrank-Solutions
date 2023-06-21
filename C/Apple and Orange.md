## [Apple and Orange](https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=false)

## Method 1 - Using Arrays for storing values
<hr>

## Explanation:
The main logic of this code can be explained in the following points:
1. The program reads in several integer values representing the positions of two trees, a house, and the number of apples and oranges that fall from each tree.
2. The program then reads in the distances of each apple and orange from their respective trees.
3. The program calculates the number of apples and oranges that fall within the range of the house by checking if the position of each apple and orange is within the range of the house.
4. The program outputs the number of apples and oranges that fall within the range of the house.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(m+n) where m is the number of apples and n is the number of oranges. This is because the program iterates through each apple and orange once to check if they fall within the range of the house.

### `Space Complexity`:
The space complexity of this code is O(m+n) where m is the number of apples and n is the number of oranges. This is because the program stores an array for each apple and orange to represent their distances from their respective trees.

## Code:
```c
#include <stdio.h>

int main()
{
    int s, a, b, m, n, t;
    // s and t represent the start and end points of the house
    scanf("%d %d", &s, &t);
    // a and b represent the positions of the apple and orange trees
    scanf("%d %d", &a, &b);
    // m and n represent the number of apples and oranges that fall from each tree
    scanf("%d %d", &m, &n);
    int app[m], ora[n], as = 0, os = 0;
    // app[] and ora[] represent the distances of each apple and orange from their respective trees
    for (int i = 0; i < m; i++)
        scanf("%d", &app[i]);
    for (int j = 0; j < n; j++)
        scanf("%d", &ora[j]);
    // as and os represent the number of apples and oranges that fall within the range of the house
    for (int k = 0; k < m; k++)
    {
        if (app[k] + a >= s && app[k] + a <= t)
        {
            as++;
        }
    }
    for (int h = 0; h < n; h++)
    {
        if (ora[h] + b >= s && ora[h] + b <= t)
        {
            os++;
        }
    }
    printf("%d\n%d", as, os);
    return 0;
}

```

## Method 2 - Using less variables
<hr>

## Explanation:
The main logic of this C program can be summarized in the following points:
1. The program takes in several integer inputs representing the values of `s`, `t`, `a`, `b`, `m`, and `n`.
2. The program initializes two variables `c1` and `c2` to `0`.
3. The program uses a for loop to iterate from `0` to `m`.
4. For each iteration, the program reads in an integer input representing the value of a temporary variable `tmp`.
5. The program adds the value of `a` to `tmp`.
6. The program checks if the value of `tmp` is greater than or equal to `s` and less than or equal to `t`.
7. If it is, the program increments the value of `c1`.
8. After all iterations have been completed, the program uses another for loop to iterate from `0` to `n`.
9. For each iteration, the program reads in an integer input representing the value of a temporary variable `tmp`.
10. The program adds the value of `b` to `tmp`.
11. The program checks if the value of `tmp` is greater than or equal to `s` and less than or equal to `t`.
12. If it is, the program increments the value of `c2`.
13. After all iterations have been completed, the program outputs the values of `c1` and `c2`.


## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(m + n) because it uses two for loops that each iterate over `m` and `n` elements, respectively.

### `Space Complexity`:
The space complexity is O(1) because the program uses a constant amount of memory to store its variables.

## Code:
```c
#include <stdio.h>

int main(void)
{
    int s, t, a, b, m, n, i, c1 = 0, c2 = 0;
    scanf("%d %d\n", &s, &t);
    scanf("%d %d\n", &a, &b); 
    scanf("%d %d\n", &m, &n);

    for(i = 0; i < m; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        tmp = a + tmp;
        
        if(tmp >= s && tmp <= t)
        {
            c1++;
        }
    }

    for(i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        tmp = b + tmp;
        
        if(tmp >= s && tmp <= t)
        {
            c2++;
        }
    }
    
    printf("%d\n%d", c1, c2);
}
```
