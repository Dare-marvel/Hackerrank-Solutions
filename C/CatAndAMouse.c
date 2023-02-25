// Link to the problem : https://www.hackerrank.com/challenges/cats-and-a-mouse/problem

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void CatandMouse(int x, int y, int z)
{
    if (abs(z - x) > abs(z - y))
    {
        printf("Cat B");
    }
    if (abs(z - x) < abs(z - y))
    {
        printf("Cat A");
    }
    if (abs(z - x) == abs(z - y))
    {
        printf("Mouse C");
    }
}
int main()
{
    int x, y, z, t;
    // printf("Enter the number of testcases:\n");
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &x, &y, &z);
        CatandMouse(x, y, z);
        printf("\n");
    }

    return 0;
}
