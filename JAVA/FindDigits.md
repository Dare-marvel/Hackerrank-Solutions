### [Find Digits](https://www.hackerrank.com/challenges/find-digits/problem)

## Explanation:
This code is a Java program that calculates the number of digits in a given integer that are divisors of the integer for multiple test cases. Here's how it works:

1. The program takes an integer `t` as input from the user, representing the number of test cases.
2. It then enters a while loop that iterates over each test case.
3. For each test case, the program takes an integer `n` as input from the user and initializes a counter `count` to 0.
4. It then extracts each digit from the integer using a while loop and checks if it is a divisor of the integer using a formula. If it is, the program increments the counter.
5. Finally, it prints the count of digits that are divisors of the integer and decrements the number of test cases.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(t*d) where d is the maximum number of digits in any integer in any test case because it iterates over `t` test cases and extracts `d` digits from each integer to calculate the result.

### `Space Complexity`:
The space complexity is O(1) because it uses only a few variables to store intermediate results.

## Code:
```java
import java.util.*;

public class FindDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Input the number of test cases
        int t = sc.nextInt();
        while (t > 0) {
            // Input the number
            int n = sc.nextInt();
            int num = n;
            int div;
            int count = 0;
            // Extract digits from the number
            while (num > 0) {
                div = num % 10;
                if (div > 0) {
                    // Check if the digit is a divisor of the number
                    if (n % div == 0) {
                        count++;
                    }
                }
                num /= 10;
            }
            // Output the result
            System.out.println(count);
            t--;
        }
    }
}
```
