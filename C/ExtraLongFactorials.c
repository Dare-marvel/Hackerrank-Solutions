# Link to the problem : https://www.hackerrank.com/challenges/extra-long-factorials/problem?isFullScreen=false

#include <stdio.h>

void ExtraLongFactorials(int n)
{
    int res[200];
    int carry, prod, res_size;

    res[0] = 1;
    res_size = 1;
    for (int i = 2; i <= n; i++)
    {
        carry = 0;
        for (int j = 0; j < res_size; j++)
        {
            prod = res[j] * i + carry;
            res[j] = prod % 10;
            carry = prod / 10;
        }
        while (carry)
        {
            res[res_size] = carry % 10;
            carry = carry / 10;
            res_size++;
        }
    }

    for (int i = res_size - 1; i >= 0; i--)
    {
        printf("%d", res[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    ExtraLongFactorials(n);
    return 0;
}
