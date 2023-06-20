### [Java Iterator](https://www.hackerrank.com/challenges/java-iterator/problem?isFullScreen=true)

## Explanation:

The code defines a class called 'Main' with two methods: 'func' and 'main'.
- The 'func' method takes an ArrayList as input and returns an Iterator. It retrieves an Iterator object from the ArrayList using the iterator() method.
- It then iterates through the elements of the ArrayList using the Iterator and checks if each element is an instance of String using the 'instanceof' operator.
- If the current element is an instance of String, the loop breaks using the break statement. This means the Iterator will stop at the current position.
- Finally, the 'func' method returns the Iterator.
- In the 'main' method, an ArrayList called 'mylist' is created to store elements.
- A Scanner object 'sc' is created to read input from the user.
- The values of 'n' and 'm' are read from the user using nextInt() method.
- The next step is to read 'n' integer values and add them to the ArrayList using a for loop.
- After that, a special marker string "###" is added to the ArrayList using the add() method.
- Another for loop is used to read 'm' string values from the user and add them to the ArrayList.
- The 'func' method is called to obtain an Iterator for the ArrayList.
- The Iterator is then used to iterate through the remaining elements of the ArrayList.
- In each iteration, the current element is retrieved using next() method and stored in the 'element' variable.
- If the 'element' is of type String, it is printed using System.out.println().
- The 'while' loop continues until there are no more elements in the ArrayList.
- Finally, the Scanner 'sc' is closed to release system resources.

## Code:
```java
import java.util.*;

public class Main {

    // Method 'func' that takes an ArrayList as input and returns an Iterator
    static Iterator func(ArrayList mylist) {
        // Get an Iterator object from the ArrayList
        Iterator it = mylist.iterator();

        // Iterate through the elements using the Iterator
        while (it.hasNext()) {
            Object element = it.next();

            // Check if the current element is an instance of String using 'instanceof' operator
            if (element instanceof String)
                break;
        }

        // Return the Iterator
        return it;
    }

    @SuppressWarnings({ "unchecked" })
    public static void main(String []args) {
        // Create an ArrayList to store elements
        ArrayList mylist = new ArrayList();

        // Create a Scanner to read input from the user
        Scanner sc = new Scanner(System.in);

        // Read the values of 'n' and 'm' from the user
        int n = sc.nextInt();
        int m = sc.nextInt();

        // Read 'n' integer values and add them to the ArrayList
        for (int i = 0; i < n; i++) {
            mylist.add(sc.nextInt());
        }

        // Add a special marker string "###" to the ArrayList
        mylist.add("###");

        // Read 'm' string values and add them to the ArrayList
        for (int i = 0; i < m; i++) {
            mylist.add(sc.next());
        }

        // Call the 'func' method to get an Iterator
        Iterator it = func(mylist);

        // Iterate through the remaining elements using the Iterator and print them
        while (it.hasNext()) {
            Object element = it.next();
            System.out.println((String) element);
        }

        // Close the Scanner
        sc.close();
    }
}

```
