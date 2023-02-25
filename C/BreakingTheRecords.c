// Link to the problem : https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

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
