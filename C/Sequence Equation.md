### [Sequence Equation](https://www.hackerrank.com/challenges/permutation-equation/problem?h_r=profile)

## Method - 1

<hr>

## Explanation:
The main logic of this C program can be summarized in the following points:
1. The program takes in an integer input `n` representing the number of elements in an array.
2. The program creates an array `arr` of size `n + 1`.
3. The program reads in `n` integer inputs representing the elements of the array `arr`.
4. The program uses a for loop to iterate from `1` to `n`.
5. For each value of `j`, the program uses another for loop to iterate from `1` to `n`.
6. For each value of `i`, the program checks if the value of `j` is equal to the value at the index `arr[arr[i]]` and if `j` is less than `n + 1`.
7. If both conditions are met, the program outputs the value of `i` and exits the inner for loop.
8. After all values of `j` have been processed, the program exits. 

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n^2) because it uses nested for loops to iterate over all possible pairs of values for `i` and `j`.

### `Space Complexity`:
The space complexity is O(n) because it uses an array of size `n + 1` to store the elements of the array.

## Code :
```c
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
```
<hr>

## Method - 2

## Explanation: 
The main logic of this C program can be summarized in the following points:
1. The program takes in an integer input `n` representing the number of elements in an array.
2. The program creates an array `p` of size `n`.
3. The program reads in `n` integer inputs representing the elements of the array `p`.
4. The program uses a for loop to iterate from `1` to `n`.
5. For each value of `i`, the program uses another for loop to iterate over the elements of `p`.
6. For each element of `p`, the program checks if the value at the index `p[j] - 1` is equal to `i`.
7. If it is not, the program increments the value of `j` and continues to the next iteration.
8. If it is, the program outputs the value of `j + 1` and exits the inner for loop.
9. After all values of `i` have been processed, the program exits.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n^2) because it uses nested for loops to iterate over all possible pairs of values for `i` and `j`.

### `Space Complexity`:
The space complexity is O(n) because it uses an array of size `n` to store the elements of the array.

## Code:
```c
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int p[n];
    // reading the values into the array
    for(int i=0; i<n; ++i)
        scanf("%d", &p[i]);
    // reordering the indices based on the values in the array
    for(int i=1, j; i<=n; ++i){
        for(j=0; p[p[j]-1]!=i; ++j);
        printf("%d\n", j+1);
    }

    return 0;
}
```
