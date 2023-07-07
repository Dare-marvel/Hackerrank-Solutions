### [Java 1D Array (Part 2)](https://www.hackerrank.com/challenges/java-1d-array/problem?isFullScreen=true)

## Explanation:
This code is a solution to the "Java 1D Array (Part 2)" problem on HackerRank. The goal of this problem is to determine if it's possible to win the game by moving forward, backward, or making a leap of a given size through a given array of integers, where 0 represents a valid position and 1 represents an invalid position.

Here's an explanation of the main logic of the code in detail:

1. The `canWin` method takes two arguments: an integer `leap` representing the size of the leap, and an integer array `game` representing the game board.
2. The `canWin` method calls a helper method with the same name, passing `leap`, `game`, and an additional argument `0` representing the initial position in the array.
3. The helper method uses a recursive depth-first search (DFS) algorithm to explore all possible valid moves from the given position until it either reaches the end of the array or determines that it's not possible to win the game.
4. The helper method first checks if the current position is out of bounds or if its value is 1. If either of these conditions is true, it returns `false` to indicate that it's not possible to win the game from this position.
5. Next, the helper method checks if the current position is at or beyond the end of the array. If this condition is true, it returns `true` to indicate that it's possible to win the game from this position.
6. If none of these conditions are true, the helper method marks the current position as visited by setting its value to 1. This is done to prevent infinite recursion by avoiding revisiting positions that have already been explored.
7. Finally, the helper method makes recursive calls to itself with the next possible positions in the array: `i + leap`, `i + 1`, and `i - 1`. If any of these recursive calls returns `true`, it returns `true` to indicate that it's possible to win the game from this position. Otherwise, it returns `false`.
I hope this explanation helps you understand how this code works and its time and space complexity.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this algorithm is O(n), where n is the size of the `game` array. This is because in the worst case, the algorithm needs to explore all positions in the array once.

### `Space Complexity`:
The space complexity of this algorithm is O(n), where n is the size of the `game` array. This is because in the worst case, the maximum depth of recursion is equal to the size of the array.

## Code:
```java
import java.util.*;

public class Solution {

    // This method determines if it's possible to win the game by making valid moves through the given array of integers.
    public static boolean canWin(int leap, int[] game) {
        // Call the helper method with the initial position of 0.
        return canWin(leap, game, 0);
    }

    // This is a helper method that uses a recursive depth-first search (DFS) algorithm to determine if it's possible to win the game from the given position.
    private static boolean canWin(int leap, int[] game, int i) {
        // If the current position is out of bounds or if its value is 1, return false.
        if (i < 0 || game[i] == 1) {
            return false;
        }
        // If the current position is at or beyond the end of the array, return true.
        if (i + 1 >= game.length || i + leap >= game.length) {
            return true;
        }
        // Mark the current position as visited to avoid infinite recursion.
        game[i] = 1;
        // Make recursive calls with the next possible positions and return true if any of them returns true.
        return canWin(leap, game, i + leap) || canWin(leap, game, i + 1) || canWin(leap, game, i - 1);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        // Read the number of test cases.
        int q = scan.nextInt();
        while (q-- > 0) {
            // Read the size of the array and the size of the leap.
            int n = scan.nextInt();
            int leap = scan.nextInt();
            
            // Read the values of the array.
            int[] game = new int[n];
            for (int i = 0; i < n; i++) {
                game[i] = scan.nextInt();
            }

            // Call the canWin method and print the result.
            System.out.println( (canWin(leap, game)) ? "YES" : "NO" );
        }
        scan.close();
    }
}

```
