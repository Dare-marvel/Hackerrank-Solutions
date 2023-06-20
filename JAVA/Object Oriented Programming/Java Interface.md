### [Java Interface](https://www.hackerrank.com/challenges/java-interface/problem?isFullScreen=false)

## Explanation:
The main logic of the code is as follows:

- The code defines an interface named AdvancedArithmetic with a single abstract method divisor_sum(int n).
- The code then defines a class named MyCalculator that implements the AdvancedArithmetic interface. It provides an implementation for the divisor_sum method.
- The code includes a main class named Solution with the main method.

Inside the main method:

- An instance of the MyCalculator class is created.
- A statement is printed to indicate that the class implements certain interfaces.
- A Scanner object is created to read user input.
- An integer n is read from the user.
- The divisor_sum method of the MyCalculator object is called with the value of n, and the result is printed.
- The Scanner object is closed.

## Code:
```java
import java.util.*;

// Interface 'AdvancedArithmetic'
interface AdvancedArithmetic {
    int divisor_sum(int n);
}

// Class 'MyCalculator' implementing 'AdvancedArithmetic' interface
class MyCalculator implements AdvancedArithmetic {
    @Override
    public int divisor_sum(int n) {
        int sum = 1;
        if (n > 1) {
            sum = 1 + n;
        }
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        return sum;
    }
}

// Main class 'Solution'
class Solution {
    public static void main(String[] args) {
        // Create an instance of 'MyCalculator'
        MyCalculator my_calculator = new MyCalculator();

        // Print the statement indicating the implemented interfaces
        System.out.print("I implemented: ");
        ImplementedInterfaceNames(my_calculator);

        // Create a Scanner to read input from the user
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        // Call the 'divisor_sum' method of 'MyCalculator' and print the result
        System.out.print(my_calculator.divisor_sum(n) + "\n");

        // Close the Scanner
        sc.close();
    }

    /*
     *  ImplementedInterfaceNames method takes an object and prints the name of the interfaces it implemented
     */
    static void ImplementedInterfaceNames(Object o) {
        // Get the interfaces implemented by the object
        Class[] theInterfaces = o.getClass().getInterfaces();

        // Iterate through the interfaces and print their names
        for (int i = 0; i < theInterfaces.length; i++) {
            String interfaceName = theInterfaces[i].getName();
            System.out.println(interfaceName);
        }
    }
}

```
