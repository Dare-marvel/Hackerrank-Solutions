## [Almost Sorted](https://www.hackerrank.com/challenges/almost-sorted/problem)

## Explanation:
This code is a C program that determines whether a given array can be sorted in ascending order by performing at most one swap or reverse operation. Here's how it works:

1. The program defines three functions: `reverseSubsection()`, `isSorted()`, and `almostSorted()`.
2. The `reverseSubsection()` function takes an array `arr`, two integers `st` and `end`, and an integer `n` as input and reverses the subsection of the array from index `st` to index `end` using a while loop and a temporary variable.
3. The `isSorted()` function takes an array `arr` and an integer `n` as input and returns 1 if the array is sorted in ascending order and 0 otherwise using a for loop to iterate over each element in the array.
4. The `almostSorted()` function takes an array `arr` and an integer `n` as input and checks if the array can be sorted by performing at most one swap or reverse operation using a series of if-else statements, for loops, and calls to the other two functions. If it is possible to sort the array, the function prints the operation that should be performed. Otherwise, it prints 'no'.
5. The program takes an integer `n` as input from the user, representing the number of elements in the array, and an array `arr` of size `n`.
6. It then calls the `almostSorted()` function to check if the array can be sorted and prints the result.

## Time and Space Compexity:
### `Time Complexity`:
The time complexity of this code is O(n^2) because it calls the `almostSorted()` function, which has a time complexity of O(n^2) because it uses nested for loops to iterate over each element in the input array twice to find the start and end indices of the subsection that should be reversed or swapped.

### `Space Complexity`:
The space complexity is O(1) because it uses only a few variables to store intermediate results.

## Code:
```c
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
```
