### [Sales By Match](https://www.hackerrank.com/challenges/sock-merchant/problem)

## Explanation:
The main logic of this C program can be summarized in the following points:
1. The program defines a function `freq` that takes in an array of integers `arr` and its size `n` as input and calculates the number of pairs of elements with the same value.
2. The function creates an array `fr` of size `101` initialized to `0` to store the frequency of each element in `arr`.
3. The function uses a for loop to iterate over the elements of `arr` and increments the corresponding element in `fr`.
4. The function initializes a variable `s` to `0` to store the total number of pairs.
5. The function uses another for loop to iterate over the elements of `fr`.
6. For each element of `fr`, the function calculates the number of pairs by dividing the element by 2 and rounding down, and adds this value to `s`.
7. After all elements of `fr` have been processed, the function outputs the value of `s`, which represents the total number of pairs.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n) because it uses two for loops that each iterate over `n` elements.

### `Space Complexity`:
The space complexity is O(n) because it uses two arrays of size `n` and `101`.

## Code:
```c
#include <stdio.h>

// Define a function named 'freq' that takes an array of integers 'arr'
// and its size 'n' as input and returns nothing
void freq(int arr[], int n)
{
    // Declare two integer variables 'i' and 'j'
    int i, j;
    // Declare an array of integers 'fr' with size 101
    // to store the frequency of each color
    // Initialize all elements to 0
    int fr[101] = {0}; // Assuming colors are between 1 and 100
    // Loop over each element in 'arr' and increment the frequency of its color
    for (i = 0; i < n; i++)
    {
        fr[arr[i]]++;
    }
    // Declare an integer variable 's' to store the number of pairs
    int s = 0;
    // Loop over each color (assuming colors are between 1 and 100)
    for (i = 1; i <= 100; i++)
    {
        // Add the number of pairs for this color to 's'
        // by dividing the frequency by 2 and rounding down
        s += fr[i] / 2;
    }
    // Print the total number of pairs
    printf("%d", s);
}

// Define the main function
int main()
{
    // Declare an integer variable 'n' to store the size of the array
    int n;
    // Read the size of the array from the standard input
    scanf("%d", &n);
    // Declare an array of integers 'arr' with size 'n'
    int arr[n];
    // Read the elements of the array from the standard input
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Call the 'freq' function to count the number of pairs
    freq(arr, n);
    // Return 0 to indicate successful completion of the program
    return 0;
}
```
