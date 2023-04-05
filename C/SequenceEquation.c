// Link : https://www.hackerrank.com/challenges/permutation-equation/problem?h_r=profile

// Code :
#include <stdio.h>

int main()
{
    int n; // variable to store the value of n
    scanf("%d", &n); // input n from user

    int arr[n + 1]; // array to store elements, size n + 1 to account for 1-based indexing

    for (int i = 1; i < n + 1; i++)
    {
        scanf("%d", &arr[i]); // input elements of the array from user
    }

    for (int j = 1; j < n + 1; j++)
    {
        for (int i = 1; i < n + 1; i++)
        {
            // Check if j is equal to the value at the index arr[arr[i]], and j is less than n + 1
            if (j == arr[arr[i]] && j < n + 1)
            {
                printf("%d\n", i); // print the value of i
                break; // exit inner loop
            }
        }
    }

    return 0;
}
