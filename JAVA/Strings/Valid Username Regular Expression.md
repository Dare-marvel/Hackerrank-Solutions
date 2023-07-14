### [Valid Username Regular Expression](https://www.hackerrank.com/challenges/valid-username-checker/problem?isFullScreen=true)
### [YT Video](https://www.youtube.com/watch?v=9RksQ5YT7FM&ab_channel=CrackConcepts)
### [GFG](https://www.geeksforgeeks.org/regular-expressions-in-java/)

## Explanation:
This code reads an integer `n` from standard input, and then reads and validates `n` usernames. It uses a regular expression defined in the `UsernameValidator` class to validate each username. If a username matches the regular expression, it prints `"Valid"`, otherwise it prints `"Invalid"`.

Here is a detailed explanation of the main logic of the code:

1. The code starts by defining a class `UsernameValidator` with a static final field `regularExpression` that contains a regular expression to validate usernames.
2. It then creates a new `Scanner` object to read input from standard input.
3. It reads an integer `n` from standard input using the `nextLine()` method of the `Scanner` class, and parses it to an integer using the `parseInt()` method of the `Integer` class.
4. It enters a loop that runs for `n` iterations to read and validate `n` usernames.
5. In each iteration of the loop, it reads a username from standard input using the `nextLine()` method of the `Scanner` class.
6. It checks if the username matches the regular expression defined in the `UsernameValidator` class using the `matches()` method of the `String` class.
7. If the username matches the regular expression, it prints `"Valid"`, otherwise it prints `"Invalid"`.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n), where n is the number of usernames, since it performs n validations in a loop.

### `Space Complexity`:
The space complexity is O(1), since it uses a constant amount of space to store variables such as `n`, `userName`, and so on.

## Code:
```java
import java.util.Scanner;

// Create a class UsernameValidator to validate usernames
class UsernameValidator {
    // Define a regular expression to validate usernames
    public static final String regularExpression = "^[A-Za-z]\\w{7,29}$";
}

public class Solution {
    // Create a new Scanner object to read input from standard input
    private static final Scanner scan = new Scanner(System.in);
    
    public static void main(String[] args) {
        // Read an integer n from standard input
        int n = Integer.parseInt(scan.nextLine());
        
        // Loop n times to read and validate n usernames
        while (n-- != 0) {
            // Read a username from standard input
            String userName = scan.nextLine();

            // Check if the username matches the regular expression defined in UsernameValidator class
            if (userName.matches(UsernameValidator.regularExpression)) {
                // If it matches, print "Valid"
                System.out.println("Valid");
            } else {
                // Otherwise, print "Invalid"
                System.out.println("Invalid");
            }           
        }
    }
}

```
