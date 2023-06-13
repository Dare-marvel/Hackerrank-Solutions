### [Beautiful days at the movies](https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem)

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
