## [Apple and Orange](https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=false)

## Code:
#### Method 1 - Using Arrays for storing values
```c
#include <stdio.h>

int main()
{
    int s, a, b, m, n, t;
   
    scanf("%d %d", &s, &t);
   
    scanf("%d %d", &a, &b);
   
    scanf("%d %d", &m, &n);
    int app[m], ora[n], as = 0, os = 0;
    
    for (int i = 0; i < m; i++)
        scanf("%d", &app[i]);
   
    for (int j = 0; j < n; j++)
        scanf("%d", &ora[j]);
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

#### Method 2 - Using less variables
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
