### [Computing the GCD](https://www.hackerrank.com/challenges/functional-programming-warmups-in-recursion---gcd/problem?isFullScreen=false)

## Explanation:
This code reads two integers `a` and `b` from standard input, computes their greatest common divisor (GCD) using the Euclidean algorithm, and prints the result. It does this by calling a method named `gcd`, which takes as input two integers `a` and `b`, and returns their GCD.

Here is a detailed explanation of the main logic of the code:

1. The code starts by defining a method named `gcd` that takes as input two integers `a` and `b`, and returns an integer.
2. Inside the method, it checks if `a` is 0. If it is, it returns `b`.
3. Otherwise, it calls itself recursively with arguments `b % a` and `a`, and returns the result.
4. In the main method, it creates a new Scanner object to read input from standard input.
5. It reads two integers `a` and `b` from standard input using the nextInt() method of the Scanner class.
6. It calls the gcd method with arguments `a` and `b`, and prints the result using the println() method of the System.out class.
7. It closes the Scanner object to avoid resource leak.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(log(min(a,b))), where a and b are the two input integers, since the Euclidean algorithm has a logarithmic time complexity.

### `Space Complexity`:
The space complexity is O(log(min(a,b))), since the recursive calls to the gcd method use additional space on the call stack.

## Code:
```java
import java.io.*;
import java.util.*;

public class Solution {
    // Define a method to compute the greatest common divisor (GCD) of two integers using the Euclidean algorithm
    public static int gcd(int a, int b)
    {
        // Base case: if a is 0, return b
        if (a == 0)
            return b;
 
        // Recursive case: compute the GCD of b % a and a
        return gcd(b % a, a);
    }

    public static void main(String[] args) {
        // Create a new Scanner object to read input from standard input
        Scanner sc = new Scanner(System.in);
        
        // Read two integers a and b from standard input
        int a , b;
        a = sc.nextInt();
        b = sc.nextInt();
        
        // Compute and print the GCD of a and b using the gcd method
        System.out.println(gcd(a,b));
        
        // Close the Scanner object to avoid resource leak
        sc.close();
    }
}

```
