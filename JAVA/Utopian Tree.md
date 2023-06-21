### [Utopian Tree](https://www.hackerrank.com/challenges/utopian-tree/problem)

## Explanation:
This code is a Java program that calculates the height of a Utopian tree after a given number of growth cycles for multiple test cases. Here's how it works:

1. The program takes an integer `t` as input from the user, representing the number of test cases.
2. It then enters a while loop that iterates over each test case.
3. For each test case, the program initializes the height of the tree `h` to 1 and takes an integer `n` as input from the user, representing the number of growth cycles for that test case.
4. It then enters a for loop that iterates over each growth cycle and calculates the height of the tree after each cycle using a formula.
5. Finally, it prints the height of the tree after all growth cycles and decrements the number of test cases.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(t*n) because it iterates over `t` test cases and `n` growth cycles for each test case to calculate the result. 

### `Space Complexity`:
The space complexity is O(1) because it uses only three variables to store intermediate results.

## Code:
```java
import java.util.Scanner;

public class UtopianTree {
    public static void main(String[] args) {
        int t,n,h; // Declare variables to store the number of test cases, the number of growth cycles, and the height of the tree
        Scanner sc= new Scanner(System.in);
        // Get the number of test cases from the user
        //System.out.println("Enter the number of test-cases");
        t=sc.nextInt();
        // Iterate over the test cases and calculate the height of the tree for each case
        while(t>0){
            h=1; // Initialize the height of the tree to 1
            // Get the number of growth cycles from the user
            //System.out.println("Enter the value of n:");
            n=sc.nextInt();
            // Iterate over the growth cycles and calculate the height of the tree after each cycle
            for (int i=1;i<=n;i++){
                if(i%2!=0){ // If the cycle number is odd, double the height of the tree
                    h=h*2;
                }
                else{ // If the cycle number is even, add 1 to the height of the tree
                    h=h+1;
                }
            }
            // Print the final height of the tree
            //System.out.println("The height of the tree is:");
            System.out.println(h);
            t--; // Decrement the number of test cases
        }
    }
}
```
