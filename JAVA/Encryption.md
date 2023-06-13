### [Encryption](https://www.hackerrank.com/challenges/encryption/problem)

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
