// Link to the problem : https://www.hackerrank.com/challenges/almost-sorted/problem

#include <stdio.h>

void reverseSubsection(int arr[], int st, int end, int n)
{
    int i = st, j = end, temp;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int isSorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

void almostSorted(int arr[], int n)
{
    int st = 0, end;
    int flag = 0;
    for (int i = n - 1; i >= 1; i--)
    {
        if (arr[i] > arr[i - 1])
        {
            continue;
        }
        else
        {
            flag = 1;
            end = i;
            break;
        }
    }
    if (flag == 1 && n == 2)
    {
        printf("yes\nswap 1 2");
        return;
    }
    else if (end == 0 && flag == 0)
    {
        printf("yes");
        return;
    }
    else if (arr[end - 1] > arr[end - 2] && arr[end] < arr[end - 2])
    {
        int j;
        for (j = end - 1; j >= 1; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                continue;
            }
            else
            {
                int temp = arr[end];
                arr[end] = arr[j - 1];
                arr[j - 1] = temp;
                break;
            }
        }
        if (!isSorted(arr, n))
        {

            printf("no");
            return;
        }
        else
        {
            printf("yes\nswap %d %d", j, end + 1);
        }
    }
    else
    {

        for (int j = end; j >= 1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                continue;
            }
            else
            {
                st = j;
                break;
            }
        }

        reverseSubsection(arr, st, end, n);

        if (!isSorted(arr, n))
        {
            printf("no");
            return;
        }
        else if (end - st == 1)
        {
            printf("yes\nswap %d %d", st + 1, end + 1);
            return;
        }
        else
        {
            printf("yes\nreverse %d %d", st + 1, end + 1);
            return;
        }
    }
}

int main()
{

    int n;
    // printf("Enter the length of the array:\n");
    scanf("%d", &n);

    int arr[n];
    // printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    almostSorted(arr, n);

    return 0;
}
