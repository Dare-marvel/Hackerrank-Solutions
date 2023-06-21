### [Extra Long Factorials](https://www.hackerrank.com/challenges/extra-long-factorials/problem?isFullScreen=false)

## Explanation :
The main logic of this C program can be summarized in the following points:
1. The program defines a function `ExtraLongFactorials` that takes in an integer input `n` and calculates the factorial of `n`.
2. The function creates an array `res` of size `200` to store the digits of the factorial result.
3. The function initializes the first element of `res` to `1` and a variable `res_size` to `1`.
4. The function uses a for loop to iterate from `2` to `n`.
5. For each value of `i`, the function uses another for loop to iterate over the elements of `res`.
6. For each element of `res`, the function calculates the product of the element and `i`, adds any carry from the previous calculation, and updates the element with the last digit of the product.
7. The function also updates the carry with the remaining digits of the product.
8. After all elements of `res` have been updated, the function checks if there is any remaining carry and adds it to `res`, updating `res_size` accordingly.
9. After all values of `i` have been processed, the function uses a for loop to iterate over the elements of `res` in reverse order and outputs each element.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n^2) because it uses nested for loops to calculate the factorial of `n`.

### `Space Complexity`:
The space complexity is O(n) because it uses an array of size `200` to store the digits of the factorial result.

## Code:
```c
#include <stdio.h>

void ExtraLongFactorials(int n)
{
    int res[200];
    int carry, prod, res_size;

    res[0] = 1;
    res_size = 1;
    // Initialize an array 'res' to store the factorial digits, and variables for carrying, product, and result size

    for (int i = 2; i <= n; i++)
    {
        carry = 0;
        // Initialize the carry to 0 for each iteration of the factorial calculation

        for (int j = 0; j < res_size; j++)
        {
            prod = res[j] * i + carry;
            res[j] = prod % 10;
            carry = prod / 10;
        }
        // Multiply each digit of the factorial stored in 'res' with the current 'i' and update the carry

        while (carry)
        {
            res[res_size] = carry % 10;
            carry = carry / 10;
            res_size++;
        }
        // If there is a carry remaining after the multiplication, store it as a new digit in 'res'
    }

    for (int i = res_size - 1; i >= 0; i--)
    {
        printf("%d", res[i]);
    }
    // Print the factorial digits in reverse order (from most significant to least significant)
}

int main()
{
    int n;
    scanf("%d", &n);
    // Read the value of 'n' from the user

    ExtraLongFactorials(n);
    // Call the function to calculate and print the factorial of 'n'

    return 0;
}
```
