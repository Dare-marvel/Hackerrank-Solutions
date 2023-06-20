### [Java Instanceof keyword](https://www.hackerrank.com/challenges/java-instanceof-keyword/problem?isFullScreen=true)

## Explanation:
The main logic of the code is as follows:

- Define three classes: Student, Rockstar, and Hacker.
- Implement the InstanceOFTutorial class as the main class.
- Define a static method named count that takes an ArrayList as input and returns a string.
- Inside the count method, initialize three counters (a, b, and c) to zero.
- Iterate through the elements of the input ArrayList using a for loop.
- Check the type of each element using the instanceof operator.
- If the element is an instance of Student, increment counter a.
- If the element is an instance of Rockstar, increment counter b.
- If the element is an instance of Hacker, increment counter c.
- Create a string with the counts of each type (a, b, and c).
- Return the created string from the count method.
- In the main method, create an ArrayList named mylist to store objects.
- Create a Scanner object named sc to read input from the user.
- Read the number of objects to be added to the ArrayList from the user.
- Iterate t times to read the object type (Student, Rockstar, or Hacker) and add the corresponding object to the ArrayList.
- Call the count method with the ArrayList as an argument and print the returned string.
- Close the Scanner object.

## Code:
```java
import java.util.*;

// Class 'Student'
class Student {}

// Class 'Rockstar'
class Rockstar {}

// Class 'Hacker'
class Hacker {}

// Main class 'InstanceOFTutorial'
public class InstanceOFTutorial {

    // Method 'count' that takes an ArrayList as input and returns a string
    static String count(ArrayList mylist) {
        int a = 0, b = 0, c = 0;

        // Iterate through the elements in the ArrayList
        for (int i = 0; i < mylist.size(); i++) {
            Object element = mylist.get(i);
            
            // Check the type of each element using 'instanceof' operator and increment the respective counter
            if (element instanceof Student)
                a++;
            if (element instanceof Rockstar)
                b++;
            if (element instanceof Hacker)
                c++;
        }
        
        // Create a string with the counts of each type and return it
        String ret = Integer.toString(a) + " " + Integer.toString(b) + " " + Integer.toString(c);
        return ret;
    }

    public static void main(String []args) {
        // Create an ArrayList to store objects
        ArrayList mylist = new ArrayList();
        
        // Create a Scanner to read input from the user
        Scanner sc = new Scanner(System.in);
        
        // Read the number of objects to be added to the ArrayList
        int t = sc.nextInt();
        
        // Iterate 't' times to read the object type and add the corresponding object to the ArrayList
        for (int i = 0; i < t; i++) {
            String s = sc.next();
            if (s.equals("Student"))
                mylist.add(new Student());
            if (s.equals("Rockstar"))
                mylist.add(new Rockstar());
            if (s.equals("Hacker"))
                mylist.add(new Hacker());
        }
        
        // Call the 'count' method and print the result
        System.out.println(count(mylist));
        
        // Close the Scanner
        sc.close();
    }
}

```
