### [Java Inheritance I](https://www.hackerrank.com/challenges/java-inheritance-1/problem?isFullScreen=false)

## Explanation:
The main logic of the code can be summarized in the following points:
1. The `Animal` class is defined with a single method `walk()` that prints "I am walking" when called.
2. The `Bird` class is defined to extend the `Animal` class, meaning it inherits all of its methods. The `Bird` class has two additional methods: `fly()` and `sing()`, which print "I am flying" and "I am singing" respectively when called.
3. In the `main` method, an instance of the `Bird` class is created and its methods are called to demonstrate the inheritance and behavior of the classes.

## Code:
```java
// Import necessary classes
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

// Define the Animal class
class Animal{
    // Method for walking behavior
	void walk(){
		System.out.println("I am walking");
	}
}

// Define the Bird class that extends Animal
class Bird extends Animal{
    // Method for flying behavior
	void fly(){
		System.out.println("I am flying");
	}
    
    // Method for singing behavior
    void sing(){
        System.out.println("I am singing");
    }
}

// Define the Solution class with the main method
public class Solution{

   public static void main(String args[]){

      // Create an instance of the Bird class
	  Bird bird = new Bird();
      
      // Call the walk method inherited from Animal
	  bird.walk();
      
      // Call the fly method from Bird
	  bird.fly();
      
      // Call the sing method from Bird
      bird.sing();
	
   }
}

```
