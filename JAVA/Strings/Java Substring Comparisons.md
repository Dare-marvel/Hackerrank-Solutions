### [Java Substring Comparisons](hackerrank.com/challenges/java-string-compare/problem?isFullScreen=true)

## Explanation:
This code reads a string `s` and an integer `k` from standard input, and then finds and prints the lexicographically smallest and largest substrings of length `k` in `s`. It does this by calling a method named `getSmallestAndLargest`, which takes as input a string `s` and an integer `k`, and returns a string containing the lexicographically smallest and largest substrings of length `k` in `s`, separated by a newline character.

Here is a detailed explanation of the main logic of the code:

1. The code starts by defining a method named `getSmallestAndLargest` that takes as input a string `s` and an integer `k`, and returns a string.
2. Inside the method, it initializes two strings `smallest` and `largest` to empty strings.
3. It sets the initial values of `smallest` and `largest` to the first substring of length `k` in `s`.
4. It enters a loop that runs from 0 to `s.length()-k`, with a loop variable `i`.
5. In each iteration of the loop, it gets the current substring of length `k` starting at index `i` using the `substring()` method of the `String` class.
6. It compares the current substring with the current values of `smallest` and `largest` using the `compareTo()` method of the `String` class.
7. If the current substring is lexicographically smaller than the current value of `smallest`, it updates the value of `smallest`.
8. If the current substring is lexicographically larger than the current value of `largest`, it updates the value of `largest`.
9. At the end of the loop, it returns a string containing `smallest` and `largest`, separated by a newline character.
10. In the main method, it creates a new Scanner object to read input from standard input.
11. It reads a string s and an integer k from standard input using the next() and nextInt() methods of the Scanner class, respectively.
12. It closes the Scanner object to avoid resource leak.
13. It calls the getSmallestAndLargest method with s and k as arguments, and prints the result.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(nk), where n is the length of string s, and k is the length of each substring, since it performs n-k+1 iterations in a loop, and in each iteration it compares two strings of length k.

### `Space Complexity`:
The space complexity is O(k), since it uses additional space to store substrings of length k.

## Code:
```java
import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        // Initialize smallest and largest strings
        String smallest = "";
        String largest = "";
        
        // Set the initial values of smallest and largest to the first substring of length k
        smallest = s.substring(0,k);
        largest = s.substring(0,k);
        
        // Loop through all substrings of length k in the string s
        for(int i=0; i<=s.length()-k; i++ ){
            // Get the current substring of length k
            String str = s.substring(i,k+i);
            
            // Compare the current substring with the current smallest and largest substrings
            if (smallest.compareTo(str)>0){
                // If the current substring is lexicographically smaller than the current smallest substring, update the smallest substring
                smallest = str;
            }
            if(largest.compareTo(str)<0){
                // If the current substring is lexicographically larger than the current largest substring, update the largest substring
                largest=str;
            }
        }  
        
        // Return the smallest and largest substrings separated by a newline character
        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        // Create a new Scanner object to read input from standard input
        Scanner scan = new Scanner(System.in);
        
        // Read a string s and an integer k from standard input
        String s = scan.next();
        int k = scan.nextInt();
        
        // Close the Scanner object to avoid resource leak
        scan.close();
      
        // Call the getSmallestAndLargest method to get the smallest and largest substrings of length k in string s, and print the result
        System.out.println(getSmallestAndLargest(s, k));
    }
}
```
