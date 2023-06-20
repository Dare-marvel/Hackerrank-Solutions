### [Java Method Overriding 2 (Super Keyword)](https://www.hackerrank.com/challenges/java-method-overriding-2-super-keyword/problem?isFullScreen=false)

## Explanation:
The main logic of the code is as follows:

- The code defines a base class named BiCycle with a method define_me() that returns a string.
- The code defines a derived class named MotorCycle which extends the BiCycle class. It overrides the define_me() method to provide a different implementation.
- Inside the MotorCycle class:

The constructor is defined.
- It prints a message introducing the motorcycle and its definition by calling the overridden define_me() method.
- It uses the super keyword to call the define_me() method of the base class and stores the result in the temp variable.
- It prints the ancestry of the motorcycle by using the value stored in temp.
- The code includes a main class named Solution with the main method.

Inside the main method:
- An instance of the MotorCycle class is created, which triggers the execution of the constructor.

## Code:
```java
import java.util.*;
import java.io.*;

// Base class 'BiCycle'
class BiCycle{
    // Method 'define_me' that returns a string
    String define_me(){
        return "a vehicle with pedals.";
    }
}

// Derived class 'MotorCycle' extending 'BiCycle'
class MotorCycle extends BiCycle{
    // Method 'define_me' that overrides the base class method
    String define_me(){
        return "a cycle with an engine.";
    }
    
    // Constructor of 'MotorCycle' class
    MotorCycle(){
        // Print a message introducing the motorcycle and its definition
        System.out.println("Hello I am a motorcycle, I am "+ define_me());

        // Fix this line: Call the 'define_me' method of the base class using 'super' keyword and store the result in 'temp' variable
        String temp = super.define_me();

        // Print the ancestry of the motorcycle
        System.out.println("My ancestor is a cycle who is "+ temp);
    }
}

// Main class 'Solution'
class Solution{
    public static void main(String []args){
        // Create an instance of 'MotorCycle' class
        MotorCycle M = new MotorCycle();
    }
}

```
