### [Java Abstract Class](https://www.hackerrank.com/challenges/java-abstract-class/problem?isFullScreen=false)

## Explanation:
The main logic of the code is as follows:

- The code defines an abstract class named Book with a string variable title, an abstract method setTitle, and a concrete method getTitle that returns the title.
- The code then defines a class named MyBook that extends the Book class. It provides an implementation for the setTitle method to set the title of the book.
- The code includes a Main class with the main method.

Inside the main method:
- It creates an instance of the Scanner class to read user input.
- It prompts the user to enter a title and stores the input in the title variable.
- It creates an instance of the MyBook class named new_novel.
- It calls the setTitle method of new_novel to set the title using the user input.
- It prints the title of the book using the getTitle method of new_novel.
- It closes the Scanner instance.

## Code:
```java
import java.util.*;

// Abstract class 'Book'
abstract class Book {
    String title;

    // Abstract method 'setTitle'
    abstract void setTitle(String s);

    // Getter method for 'title'
    String getTitle() {
        return title;
    }
}

// 'MyBook' class that extends 'Book'
class MyBook extends Book {
    // Implementation of the 'setTitle' method
    void setTitle(String s) {
        this.title = s;
    }
}

// Main class
public class Main {
    public static void main(String[] args) {
        // Book new_novel = new Book();
        // This line produces an error because 'Book' is an abstract class and cannot be instantiated directly.

        // Create a new instance of the Scanner class to read user input
        Scanner sc = new Scanner(System.in);

        // Read a line of input from the user and store it in the 'title' variable
        String title = sc.nextLine();

        // Create a new instance of 'MyBook' class
        MyBook new_novel = new MyBook();

        // Call the 'setTitle' method of 'MyBook' class to set the title
        new_novel.setTitle(title);

        // Print the title using the 'getTitle' method of 'MyBook' class
        System.out.println("The title is: " + new_novel.getTitle());

        // Close the Scanner
        sc.close();
    }
}

```
