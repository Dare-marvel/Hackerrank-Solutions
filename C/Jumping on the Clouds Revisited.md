### [Jumping on the Clouds Revisited](https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem)

## Explanation:
The main logic of this C program can be summarized in the following points:
1. The program defines a function `jump_set` that takes in two integer inputs `n` and `k` and returns the number of jumps required to reach the starting point when jumping `k` steps at a time in a circular array of size `n`.
2. The function checks if `n` is equal to `k`, if `(n-1) % k` is not equal to `0` and `k` is less than or equal to `n/2`, if `(n-1) % k` is equal to `0` and `k` is less than or equal to `n/2`, or if `k` is greater than `n/2`, and returns the appropriate value based on these conditions.
3. The program takes in two integer inputs `n` and `k`.
4. The program creates an array `arr` of size `n`.
5. The program reads in `n` integer inputs representing the elements of the array `arr`.
6. The program calls the function `jump_set` with inputs `n` and `k` and stores the result in a variable `jmp`.
7. The program initializes variables `i`, `c`, and `e` to `(i+k) % n`, `0`, and `100`, respectively.
8. The program uses a while loop that iterates until the value of `c` is equal to the value of `jmp`.
9. For each iteration, the program checks if the current element of the array is equal to 1.
10. If it is, the program decrements the value of `e` by 3, increments the value of `c`, and updates the value of `i`.
11. If it is not, the program decrements the value of `e`, increments the value of `c`, and updates the value of `i`.
12. After all iterations have been completed, the program outputs the final value of `e`.

 
## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n) because it uses a while loop that iterates until the value of `c` is equal to the value returned by the function call to `jump_set`.

### `Space Complexity`:
The space complexity is O(n) because it uses an array of size `n` to store the elements of the array.


## Code:
```c
#include<stdio.h>

int jump_set(int n, int k) {
    if (n == k) {
        return 1;
    }
    // Check if the number of elements in the array is equal to the jump size
    // If so, return 1 indicating that only one jump is needed to traverse all elements

    else if ((n - 1) % k != 0 && k <= n / 2) {
        return (n - 1) / k + 1;
    }
    // Check if the number of elements minus one is not divisible by the jump size
    // and if the jump size is less than or equal to half the number of elements
    // In this case, return the ceiling value of (n - 1) divided by k, plus 1

    else if (((n - 1) % k == 0 && k <= n / 2) || k > n / 2) {
        return n;
    }
    // Check if the number of elements minus one is divisible by the jump size
    // and if the jump size is less than or equal to half the number of elements,
    // or if the jump size is greater than half the number of elements
    // In either case, return the number of elements in the array

    return 0;
    // Default return value if none of the above conditions are satisfied
}

int main() {
    int e = 100, jmp = 0, n, k;
    // Initialize variables 'e' for energy, 'jmp' for the number of jumps needed,
    // 'n' for the number of elements in the array, and 'k' for the jump size

    scanf("%d", &n);
    // Read the value of 'n' from the user

    scanf("%d", &k);
    // Read the value of 'k' from the user

    int arr[n];
    // Declare an array 'arr' of size 'n' to store the elements

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Read the elements of the array from the user

    jmp = jump_set(n, k);
    // Call the 'jump_set' function to calculate the number of jumps needed

    int i = (i + k) % n, c = 0;
    // Initialize variables 'i' and 'c' for array traversal and counting jumps

    while (c < jmp) {
        if (arr[i] == 1) {
            e = e - 3;
            c++;
            i = (i + k) % n;
        }
        else {
            e--;
            c++;
            i = (i + k) % n;
        }
    }
    // Traverse the array based on the jump size 'k' and adjust energy 'e' based on the element value

    printf("%d\n", e);
    // Print the final value of energy

    return 0;
}
```
