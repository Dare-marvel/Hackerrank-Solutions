### [Electronics Shop](https://www.hackerrank.com/challenges/electronics-shop/problem)

## Explanation:
The main logic of this C program can be summarized in the following points:
1. The program takes in three integer inputs: `b`, `k`, and `u`. `b` represents the budget, `k` represents the number of keyboards, and `u` represents the number of USB drives.
2. The program then takes in `k` integer inputs representing the prices of keyboards and `u` integer inputs representing the prices of USB drives.
3. The program initializes a variable `max` to `-1`.
4. The program uses a nested while loop to iterate over all possible pairs of keyboard and USB drive prices.
5. For each pair of keyboard and USB drive prices, the program checks if their sum is less than or equal to the budget `b` and greater than the current value of `max`.
6. If both conditions are met, the program updates the value of `max` to the sum of the keyboard and USB drive prices.
7. After all pairs have been checked, the program outputs the value of `max`, which represents the maximum amount that can be spent on a keyboard and a USB drive without exceeding the budget `b`. If it is not possible to buy both a keyboard and a USB drive within the budget, the program outputs `-1`.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(k * u) because it uses a nested while loop to iterate over all possible pairs of keyboard and USB drive prices.

### `Space Complexity`:
The space complexity is O(k + u) because it uses two arrays of size `k` and `u` to store the prices of keyboards and USB drives.

## Code:
```c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int b, k, u, i = 0, j;
    // Initialize variables and arrays

    scanf("%d %d %d", &b, &k, &u);
    // Read the budget, number of keyboards, and number of USB drives from the user

    int key[1000], usb[1000];
    // Declare arrays to store the prices of keyboards and USB drives

    while (i < k) {
        scanf("%d", &key[i]);
        i++;
    }
    // Read the prices of keyboards from the user and store them in the 'key' array

    i = 0;

    while (i < u) {
        scanf("%d", &usb[i]);
        i++;
    }
    // Read the prices of USB drives from the user and store them in the 'usb' array

    i = 0;
    j = 0;
    int max = -1;
    // Initialize variables 'i' and 'j' as indices for looping through the arrays,
    // and 'max' to store the maximum price combination that fits within the budget 'b'

    while (i < k) {
        while (j < u) {
            if ((key[i] + usb[j] <= b) && (key[i] + usb[j] > max)) {
                max = key[i] + usb[j];
                j++;
                i++;
            }
            j++;
        }
        i++;
    }
    // Iterate through all possible combinations of a keyboard and USB drive,
    // check if the price of the combination is within the budget 'b',
    // and update 'max' if the current combination has a higher price

    printf("%d", max);
    // Print the maximum affordable price combination

    return 0;
}

```
