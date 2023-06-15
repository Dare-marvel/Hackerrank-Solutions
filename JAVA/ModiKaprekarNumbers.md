### [Modi Kaprekar Numbers](https://www.hackerrank.com/challenges/kaprekar-numbers/problem)

## Explanation:
This code is a Java program that finds and prints all the Modified Kaprekar Numbers in a given range. Here's how it works:

1. The program takes two long integers `p` and `q` as input from the user, representing the lower and upper bounds of the range respectively.
2. It then creates an object of the `ModiKaprekarNumbers` class and calls its `KapCheck()` method for each number in the range [p, q] to check if it is a Modified Kaprekar Number.
3. The `KapCheck()` method takes a long integer `n` as input and checks if it satisfies the Kaprekar condition using a formula. If it does, the method prints the number and returns true.
4. If no Modified Kaprekar Number is found in the given range, the program prints an error message.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O((q-p+1)*d) where d is the maximum number of digits in any number in the range [p, q] because it iterates over each number in the range and checks if it satisfies the Kaprekar condition using a formula that involves converting the number to a string and calculating its length.

### `Space Complexity`:
The space complexity is O(d) because it uses a string of size d to store intermediate results.

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
