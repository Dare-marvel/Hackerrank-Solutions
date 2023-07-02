### [Java Stack](https://www.hackerrank.com/challenges/java-stack/problem)

## Explanation:
The main logic of the code is to check whether the input string of parentheses is balanced or not. Here's how it works:

1. The code reads in a series of strings from standard input using a `Scanner` object.
2. For each string, it initializes a `Stack` to keep track of opening parentheses and a boolean variable `balanced` to keep track of whether the parentheses are balanced.
3. The code then loops through each character in the input string.
4. If the current character is an opening parenthesis, it is pushed onto the stack.
5. If the current character is a closing parenthesis, the code checks if the stack is empty. If it is, then the parentheses are not balanced and the loop is exited.
6. If the stack is not empty, the top element is popped from the stack and checked against the current closing parenthesis. If they do not match, then the parentheses are not balanced and the loop is exited.
7. After processing all characters in the input string, if there are still elements left in the stack, then the parentheses are not balanced.
8. The value of `balanced` is printed to standard output.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n), where n is the length of the input string. This is because each character in the input string is processed once.

### `Space Complexity`:
The space complexity of this code is O(n), where n is the length of the input string. This is because in the worst case, all characters in the input string are opening parentheses and are pushed onto the stack.

## Code:
```java
import java.util.*; // Importing the java.util package

class Solution{ // Defining a class named Solution
    
    public static void main(String []argh) // Main method
    {
        Scanner sc = new Scanner(System.in); // Creating a Scanner object to read input from standard input
        
        while (sc.hasNext()) { // While there is more input to read
            String input=sc.next(); // Read the next token as a String
            //Complete the code
            Stack<Character> openParen = new Stack<Character>(); // Creating a Stack to keep track of opening parentheses
            boolean balanced = true; // Initializing a boolean variable to keep track of whether the parentheses are balanced
            
            for(int i=0;i<input.length();i++){ // Looping through each character in the input String
                char x = input.charAt(i); // Getting the current character
  
                if (x == '(' || x == '[' || x == '{')  // If the current character is an opening parenthesis
                {
                    // Push the element in the stack
                    openParen.push(x); // Push it onto the Stack
                    continue; // Continue to the next iteration of the loop
                }
                
                if (openParen.isEmpty()){ // If the Stack is empty
                    balanced = false; // The parentheses are not balanced
                    break; // Break out of the loop
                }
                    
                char check; 
                switch (x) { // Using a switch statement to check for different closing parentheses
                case ')': 
                    check = openParen.pop(); // Pop the top element from the Stack
                    if (check == '{' || check == '[') // If it is not a matching opening parenthesis
                        balanced = false; // The parentheses are not balanced
                    break;
      
                case '}':
                    check = openParen.pop();
                    if (check == '(' || check == '[')
                        balanced = false;
                    break;
      
                case ']':
                    check = openParen.pop();
                    if (check == '(' || check == '{')
                        balanced = false;
                    break;
                }
                   
            }
            if(!openParen.isEmpty()){ // If there are still elements left in the Stack after processing all characters in the input String
                balanced = false; // The parentheses are not balanced
            }
            System.out.println(balanced); // Print whether or not the parentheses are balanced
        }
        sc.close(); // Close the Scanner object
        
    }
}

```
