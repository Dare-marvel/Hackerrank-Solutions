### [Modi Kaprekar Numbers](https://www.hackerrank.com/challenges/kaprekar-numbers/problem)

## Code:
```java
import java.util.Scanner;

public class ModiKaprekarNumbers {

    // Method to check if a given number is a Modified Kaprekar Number or not
    boolean KapCheck(Long n){
        String str=Long.toString(n); // Convert the number to a string
        int d=str.length(); // Get the number of digits
        double r=(n*n)%(Math.pow(10,d)); // Calculate the right-hand part of the Kaprekar equation
        // Check if the number satisfies the Kaprekar condition
        if(((n*n-r)/(Math.pow(10,d)))+r==n){
            System.out.print(n+" "); // Print the number if it is a Modified Kaprekar Number
            return true;
        }
        return false; // Return false if the number is not a Modified Kaprekar Number
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int flag=0; // Flag to keep track of whether a Modified Kaprekar Number was found or not
        
        // Take input the lower bound
        Long p=sc.nextLong();
        // Take input the upper bound
        Long q=sc.nextLong();
        ModiKaprekarNumbers m= new ModiKaprekarNumbers(); // Create an object of the class
        // Iterate over all the numbers in the range [p, q] and check if they are Modified Kaprekar Numbers
        for(Long i=p;i<=q;i++){
            if(m.KapCheck(i)){
                flag=1; // Set the flag if a Modified Kaprekar Number is found
            }
        }
        if(flag==0){
            System.out.println("INVALID RANGE"); // Print an error message if no Modified Kaprekar Number is found
        }
    }
}
```
