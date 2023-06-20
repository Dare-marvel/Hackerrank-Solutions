### [Java Method Overriding](https://www.hackerrank.com/challenges/java-method-overriding/problem?isFullScreen=true)

## Explanation:
The main logic of the code can be summarized in the following points:
1. The `Sports` class is defined with two methods: `getName()` and `getNumberOfTeamMembers()`. The `getName()` method returns the string "Generic Sports" and the `getNumberOfTeamMembers()` method prints a message that includes the result of calling the `getName()` method.
2. The `Soccer` class is defined to extend the `Sports` class, meaning it inherits all of its methods. The `Soccer` class overrides both the `getName()` and `getNumberOfTeamMembers()` methods. The overridden `getName()` method returns the string "Soccer Class" and the overridden `getNumberOfTeamMembers()` method prints a message that includes the result of calling the overridden `getName()` method.
3. In the `main` method, instances of both the `Sports` and `Soccer` classes are created and their methods are called to demonstrate the inheritance and behavior of the classes.

## Code:
```java
import java.util.*;

// Base class 'Sports'
class Sports {

    // Method 'getName' that returns a string
    String getName() {
        return "Generic Sports";
    }

    // Method 'getNumberOfTeamMembers' that prints the number of team members
    void getNumberOfTeamMembers() {
        System.out.println("Each team has n players in " + getName());
    }
}

// Derived class 'Soccer' extending 'Sports'
class Soccer extends Sports {

    // Overridden method 'getName' that returns a string
    @Override
    String getName() {
        return "Soccer Class";
    }

    // Overridden method 'getNumberOfTeamMembers' that prints the number of team members for soccer
    @Override
    void getNumberOfTeamMembers() {
        System.out.println("Each team has 11 players in " + getName());
    }
}

// Main class 'Solution'
public class Solution {

    public static void main(String []args) {
        // Create an instance of the base class 'Sports'
        Sports c1 = new Sports();

        // Create an instance of the derived class 'Soccer'
        Soccer c2 = new Soccer();

        // Print the name of the base class instance
        System.out.println(c1.getName());

        // Call the method 'getNumberOfTeamMembers' on the base class instance
        c1.getNumberOfTeamMembers();

        // Print the name of the derived class instance
        System.out.println(c2.getName());

        // Call the method 'getNumberOfTeamMembers' on the derived class instance
        c2.getNumberOfTeamMembers();
    }
}

```
