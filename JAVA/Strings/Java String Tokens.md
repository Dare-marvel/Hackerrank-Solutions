### [Java String Tokens](https://www.hackerrank.com/challenges/java-string-tokens/problem?isFullScreen=false)

## Explantion:
1. The code starts by creating a `Scanner` object to read input from the standard input stream (`System.in`).
2. The `nextLine()` method is called on the `Scanner` object to read a line of text from the standard input. This input is stored in a `String` variable named `s`.
3. The `Scanner` object is then closed using the `close()` method.
4. The `trim()` method is called on the `String` variable `s` to remove any leading or trailing whitespace characters.
5. The code then checks if the length of the trimmed `String` variable `s` is equal to 0. If it is, this means that the input string was either empty or contained only whitespace characters. In this case, the code outputs 0 and exits using the `return` statement.
6. If the length of the trimmed `String` variable `s` is not equal to 0, the code continues by calling the `split()` method on the `String` variable `s`. The argument passed to the `split()` method is a regular expression that matches one or more non-alphabetic characters (`"[^a-zA-Z]+"`). This means that the input string will be split into tokens based on all non-alphabetic characters. The resulting tokens are stored in a `String` array named `words`.
7. The code then outputs the number of tokens in the `words` array using the `length` property of the array.
8. Finally, a for-each loop is used to iterate over each token in the `words` array and output it using the `println()` method.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n), where n is the length of the input string. This is because each character in the input string needs to be processed once when calling methods such as `trim()`, `split()`, and when iterating over the tokens in the for-each loop.

### `Space Complexity`:
The space complexity of this code is also O(n), where n is the length of the input string. This is because a new `String` array named `words` is created to store the tokens resulting from splitting the input string. In the worst case, each character in the input string could be a token, resulting in an array of size n.

## Code:
```java
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        // Create a Scanner object to read input from the standard input stream
        Scanner scan = new Scanner(System.in);
        // Read a line of text from the standard input and store it in the variable `s`
        String s = scan.nextLine();
        // Close the Scanner object
        scan.close();
        
        // Remove any leading or trailing whitespace characters from the input string `s`
        s = s.trim();
        
        // Check if the input string `s` is empty after trimming
        if (s.length() == 0) {
            // If the input string is empty, output 0 and exit the program
            System.out.println(0);
            return;
        }
        
        // Split the input string `s` into tokens based on all non-alphabetic characters
        String [] words = s.split("[^a-zA-Z]+");
        
        // Output the number of tokens in the `words` array
        System.out.println(words.length);
        // Iterate over each token in the `words` array and output it
        for (String word : words) {
            System.out.println(word);
        }
    }
}

```
