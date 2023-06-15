### [Repeated String](https://www.hackerrank.com/challenges/repeated-string/problem)

## Explanation:
This code is a Java program that calculates the number of occurrences of the character 'a' in the first `n` characters of an infinitely repeating string. Here's how it works:

1. The program takes a string `str` and a long integer `n` as input from the user, representing the string to be repeated and the number of characters to check respectively.
2. It converts the string to a character array and counts the number of occurrences of 'a' in the array.
3. The program then calculates the total number of occurrences of 'a' in the first `n` characters of the infinitely repeating string using a formula.
4. Finally, it prints the result.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(k) where k is the length of the input string because it iterates over each character in the input string to count the occurrences of 'a'.
### `Space Complexity`:
The space complexity is O(k) because it uses a character array of size k to store intermediate results.

## Code:
```java
import java.util.Scanner;

public class RepeatedStrings {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int c=0;

        // Prompt user to input string and length of characters to check
        String str=sc.next();
        
        long n=sc.nextLong();

        // Convert string to character array and count occurrences of "a"
        char [] arr= new char[str.length()];
        arr=str.toCharArray();
        for (char ch:arr) {
            if(ch=='a'){
                c++;
            }
        }

        // Calculate the total number of occurrences of "a" in the first n characters of the infinitely repeating string
        Long tot=c*(n/arr.length);
        for(int i=0;i<(n% arr.length);i++){
            if(arr[i]=='a'){
                tot++;
            }
        }

        // Print the result
        System.out.println(tot);
    }
}
```
