### [Java Inheritance II](https://www.hackerrank.com/challenges/java-inheritance-2/problem?isFullScreen=true)

## Explanation:
The main logic of the code is as follows:

- The code defines two classes: Arithmetic and Adder. Arithmetic has a method named add that takes two integers and returns their sum. Adder extends the Arithmetic class, inheriting the add method.
- The code then defines a public class named Solution with a main method.
- Inside the main method:
- An instance of the Adder class is created and assigned to the variable a.
- The name of the superclass of Adder is printed using reflection, which retrieves the class name dynamically.
The add method of Adder is called three times with different arguments, and the results are printed.

## Code:
```java
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

// Write your code here

// Create a class named 'Arithmetic'
class Arithmetic {
    // Define a method named 'add' that takes two integers as parameters and returns their sum
    int add(int n1, int n2) {
        return n1 + n2;
    }
}

// Create a class named 'Adder' that extends the 'Arithmetic' class
class Adder extends Arithmetic {
    // This class inherits the 'add' method from its superclass
}

// Create a public class named 'Solution'
public class Solution {
    // Define the main method
    public static void main(String[] args) {
        // Create a new instance of 'Adder' and assign it to the variable 'a'
        Adder a = new Adder();

        // Print the name of the superclass of 'Adder' on a new line
        System.out.println("My superclass is: " + a.getClass().getSuperclass().getName());

        // Call the 'add' method of 'Adder' three times with different arguments and print the results
        System.out.print(a.add(10, 32) + " " + a.add(10, 3) + " " + a.add(10, 10) + "\n");
    }
}

```
