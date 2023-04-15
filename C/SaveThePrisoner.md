## [Save The Prisoner](https://www.hackerrank.com/challenges/save-the-prisoner/problem)

## Key Insights : 
s + st - 2: This calculates the index of the last candy if we start counting from the starting prisoner st.<br>
(s + st - 2) % p: This takes the modulus of the above index with the total number of prisoners p.<br> 
This will give the remaining candies that are not distributed among the full rounds of candy distribution.<br>
1: Add 1 to the above result to get the prisoner number who receives the last candy.<br>

## Code :
```c
#include <stdio.h>

int main()
{
    int t;
    // Number of testcases
    scanf("%d", &t);
    while (t--)
    {
        long p, s, st;
        // Number of prisoners
        scanf("%ld", &p);
        // Number of sweets
        scanf("%ld", &s);
        // Position of starting prisoner
        scanf("%ld", &st);
        
        // Prisoner number who would receive the last candy
        printf("%d\n", (s + st - 2) % p + 1);

        return 0;
    }
}
```
