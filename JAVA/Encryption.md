### [Encryption](https://www.hackerrank.com/challenges/encryption/problem)

## Explanation:
This code is a Java program that encrypts a given message using a specific algorithm. Here's how it works:

1. The program takes a string `orig_str` as input from the user, representing the message to be encrypted.
2. It removes all white spaces from the input string using the `replaceAll()` method.
3. The program calculates the square root of the length of the original string and rounds it up and down to the nearest integer to get the upper and lower bounds respectively.
4. It then calculates the number of rows and columns in a 2D character array that will be used to store the encrypted message using a formula.
5. The program initializes the 2D array with the calculated number of rows and columns and fills it with characters from the original string using nested for loops.
6. Finally, it iterates over each column in the 2D array using nested for loops and prints the encrypted message.

Is there anything else you would like to know?
## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(r*c) where r is the number of rows and c is the number of columns in the 2D array because it uses nested for loops to fill and iterate over each element in the 2D array.

### `Space Complexity`:
The space complexity is O(r*c) because it uses a 2D array of size r*c to store intermediate results.

## Code:
```java
import java.util.*;

public class Encryption {
    public static void main(String[] args) {
        char [][] arr; // 2D character array to store the encrypted message
        Scanner sc=new Scanner(System.in);
        //Input of the string
        String orig_str=sc.nextLine();
        orig_str=orig_str.replaceAll("\\s",""); // Remove all white spaces from the input string

        double a = Math.sqrt(orig_str.length()); // Calculate square root of length of original string
        double ub=Math.ceil(a); // Round up the square root to the nearest integer as upper bound
        double lb=Math.floor(a); // Round down the square root to the nearest integer as lower bound
        int col=(int)ub; // Number of columns in the 2D array is the upper bound
        int row=(int)lb; // Number of rows in the 2D array is the lower bound

        if(ub*lb < orig_str.length()){
            row=col; // If the product of upper bound and lower bound is less than length of original string, set row to col
            arr=new char[row][col]; // Initialize the 2D array with row and col
        }
        else{
            arr=new char[row][col]; // Otherwise, initialize the 2D array with row and col
        }

        int k=0; // Counter to keep track of characters in the original string
        for (int i=0;i<row;i++){ // Loop through rows
            int j=0;
            while(j<col && k<orig_str.length()){ // Loop through columns and fill the 2D array with characters from the original string
               arr[i][j]=orig_str.charAt(k);
               j++;
               k++;
            }
        }
        //System.out.println("Final String");
        for (int i=0;i<col;i++){ // Loop through columns to print the encrypted message
            for (int j=0;j<row;j++){ // Loop through rows
                if(Character.isLetter(arr[j][i])){ // Print only the letters in the 2D array
                    System.out.print(arr[j][i]);
                }
            }
            System.out.print(" "); // Print a space after each column
        }
    }
}
```
