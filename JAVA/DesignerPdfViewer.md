### [Designer Pdf viewer](https://www.hackerrank.com/challenges/designer-pdf-viewer/problem)

## Explanation:
This code is a Java program that calculates the area of a highlighted selection in a PDF viewer given the heights of each letter and the string to be highlighted. Here's how it works:

1. The program creates an array `htarr` of size 26 to store the heights of each letter.
2. It then takes 26 integers as input from the user to populate the `htarr` array, representing the heights of each letter.
3. The program takes a string `str` as input from the user, representing the string to be highlighted, and converts it to a character array `carr`.
4. It then iterates over each character in the `carr` array using a for loop and compares its height with the current maximum height. If it is greater, the program updates the maximum height.
5. Finally, it prints the area of the highlighted selection as the product of the maximum height and the length of the input string.

## Time and Space Complexity:
### `Time Complexity:`
The time complexity of this code is O(k) where k is the length of the input string because it iterates over each character in the input string once to calculate the result.

### `Space Complexity:`
The space complexity is O(1) because it uses only a few variables and arrays of fixed size to store intermediate results.

## Code:
```java
import java.util.Scanner;

public class DesignerPdfViewer {
    public static void main(String[] args) {
        int [] htarr= new int [26]; // Array to store the heights of letters
        Scanner sc= new Scanner(System.in);
        for (int i=0;i<26;i++) {
            // Input the heights of letters
            htarr[i] = sc.nextInt();
        }
        char [] carr= new char[10]; // Array to store the characters of the string
        String str;
        str= sc.next(); // Input the string
        carr= str.toCharArray(); // Convert the string to a character array
        int max=0; // Variable to store the maximum height
        for (int i=0;i<str.length();i++){
            if (htarr[carr[i]-97]>max){
                // Compare the height of the current character with the current maximum height
                // If it is greater, update the maximum height
                max=htarr[carr[i]-97];
            }
        }
        System.out.println(max*str.length()); // Print the area as product of maximum height and string length
    }
}
```
