### [Equalize The Array](https://www.hackerrank.com/challenges/equality-in-a-array/problem?h_r=profile)

## Explnation:
The main logic of this C program can be summarized in the following points:
1. The program takes in an integer input `n` representing the number of elements in an array.
2. The program then creates two arrays: `arr` of size `n` and `arr2` of size `100` initialized to `0`.
3. The program reads in `n` integer inputs representing the elements of the array `arr` and keeps track of their frequencies by incrementing the corresponding element in `arr2`.
4. The program initializes a variable `max` to `0`.
5. The program uses a for loop to iterate over the elements of `arr2` and finds the maximum value, which represents the frequency of the most common element in `arr`.
6. The program outputs the value of `n - max`, which represents the number of elements that need to be removed from `arr` to make all elements equal.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n) because it uses two for loops that each iterate over `n` elements.

### `Space Complexity`:
The space complexity is O(n) because it uses two arrays of size `n` and `100`.

## Code:
```c
#include <stdio.h>

int main() {
    int n;
    // Read the value of n
    scanf("%d", &n);

    int arr[n];
    int arr2[100] = {0};
    // Declare an array 'arr' of size n to store the input elements
    // Declare an array 'arr2' of size 100 to keep track of the frequencies of elements

    // Read the elements of the array and keep track of their frequencies
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        ++arr2[(arr[i] - 1)];
    }

    int max = 0;
    // Initialize 'max' variable to keep track of the maximum frequency

    // Find the frequency of the most common element
    for (int i = 0; i < 100; ++i) {
        if (arr2[i] > max)
            max = arr2[i];
    }

    // Print the number of elements that need to be removed to make all elements equal
    printf("%d", n - max);

    return 0;
}
```
