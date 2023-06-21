### [Beautiful Days at the Movies](https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem)

## Explanation:
This code is a Java program that calculates the number of beautiful days in a given range of days. Here's how it works:

1. The program takes two integers `n1` and `n2` as input from the user, representing the starting and ending days of the range respectively.
2. It then takes a float `k` as input from the user, representing the divisor.
3. The program creates an object of the `Reverse` class and calls its `rev()` method to reverse each day in the range [n1, n2].
4. It then calculates the absolute difference between each day and its reverse and divides it by `k`. If the quotient is an integer, the program increments a counter.
5. Finally, it prints the count of beautiful days in the given range.

Is there anything else you would like to know?
## Time and Space Complexity:
### `Time Complexity:`
The time complexity of this code is O((n2-n1+1)*d) where d is the maximum number of digits in any day in the range [n1, n2] because it iterates over each day in the range and reverses each day using a while loop that extracts each digit from the day.

### `Space Complexity:`
The space complexity is O(1) because it uses only a few variables to store intermediate results.

## Code:
```java
import java.util.Scanner;

class Reverse {
    // Method to reverse an integer
    int rev(int num) {
        int rn = 0;
        while (num > 0) {
            rn = 10 * rn + num % 10;
            num = num / 10;
        }
        return rn;
    }
}

public class BeautifuldaysAtTheMovies {
    public static void main(String[] args) {
        int n1, n2, count = 0;
        Reverse r = new Reverse();
        Scanner sc = new Scanner(System.in);
        // Input the starting day
        n1 = sc.nextInt();
        // Input the ending day
        n2 = sc.nextInt();
        // Input the divisor
        float k = sc.nextInt();
        for (int i = n1; i <= n2; i++) {
            // Calculate the absolute difference between i and its reverse
            float c = (Math.abs(i - r.rev(i))) / k;
            // Check if the quotient is an integer
            if (c == Math.round(c)) {
                count++;
            }
        }
        // Output the number of beautiful days
        System.out.println(count);
    }
}
```
