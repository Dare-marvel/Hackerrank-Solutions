### [Java Dequeue](https://www.hackerrank.com/challenges/java-dequeue/problem)

## Explanation:
This Java code is using a sliding window approach to find the maximum number of unique elements in all possible contiguous subarrays of size `m` in an array of size `n`. Here's how it works:

1. The code takes two integer inputs `n` and `m` from the user, where `n` is the size of the array and `m` is the size of the subarray.
2. It initializes a Deque, a HashSet, and a variable `max` to keep track of the maximum number of unique elements.
3. The code then enters a loop that runs `n` times, taking an integer input from the user each time.
4. The input is added to both the Deque and the HashSet.
5. If the size of the Deque becomes equal to `m`, it checks if the size of the HashSet is greater than `max`. If it is, `max` is updated to the size of the HashSet.
6. The first element is then removed from the Deque. If this element is not present in the Deque anymore, it is also removed from the HashSet.
7. Finally, after the loop ends, the value of `max` is printed, which represents the maximum number of unique elements in all possible contiguous subarrays of size `m`.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n) because it contains a single loop that runs n times.

### `Space Complexity`:
The space complexity is also O(n) because it uses a Deque and a HashSet to store n elements.

## Code:
```java
import java.util.*;

public class test {
    
    public static void main(String[] args) {
        // Create a Scanner object to read input from the user
        Scanner in = new Scanner(System.in);
        // Create a Deque to store the elements of the current subarray
        Deque deque = new ArrayDeque<>();
        // Create a HashSet to store the unique elements of the current subarray
        HashSet<Integer> set = new HashSet<>();

        // Read the size of the array and the size of the subarray from the user
        int n = in.nextInt();
        int m = in.nextInt();
        // Initialize a variable to keep track of the maximum number of unique elements
        int max = Integer.MIN_VALUE;

        // Loop n times to read n elements from the user
        for (int i = 0; i < n; i++) {
            // Read an element from the user
            int input = in.nextInt();

            // Add the element to the Deque and the HashSet
            deque.add(input);
            set.add(input);

            // If the size of the Deque becomes equal to m
            if (deque.size() == m) {
                // Check if the size of the HashSet is greater than max and update max if necessary
                if (set.size() > max)
                    max = set.size();

                // Remove the first element from the Deque
                int first = (int) deque.remove();
                // If this element is not present in the Deque anymore, remove it from the HashSet as well
                if (!deque.contains(first))
                    set.remove(first);
            }
        }
        // Print the maximum number of unique elements
        System.out.println(max);
    }
}

```
