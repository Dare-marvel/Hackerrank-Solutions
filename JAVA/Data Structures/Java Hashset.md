### [Java Hashset](https://www.hackerrank.com/challenges/java-hashset/problem?isFullScreen=true)

## Explanation:
The main logic of the code can be explained in the following points:
1. The code reads an integer `t` from standard input, which represents the number of pairs of strings to be read.
2. It then creates two arrays, `pair_left` and `pair_right`, to store the left and right elements of each pair, respectively.
3. The code reads `t` pairs of strings from standard input and stores them in the `pair_left` and `pair_right` arrays.
4. A `HashSet` is created to store unique pairs of strings.
5. The code iterates over the `t` pairs of strings, concatenating the left and right elements of each pair with a space in between, and adds the resulting string to the `HashSet`.
6. After adding each pair to the `HashSet`, the code prints the current size of the `HashSet`, which represents the number of unique pairs seen so far.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(t), where t is the number of pairs of strings. This is because the code performs a constant amount of work for each pair of strings.

### `Space Complexity`:
The space complexity of this code is also O(t), where t is the number of pairs of strings. This is because the code stores all t pairs of strings in memory, as well as a `HashSet` that can contain up to t unique pairs.

## Code:
```java
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

 public static void main(String[] args) {
        // Create a Scanner object to read input from stdin
        Scanner s = new Scanner(System.in);
        // Read the number of test cases
        int t = s.nextInt();
        // Create two arrays to store the left and right pairs
        String [] pair_left = new String[t];
        String [] pair_right = new String[t];
        
        // Read the pairs from stdin
        for (int i = 0; i < t; i++) {
            pair_left[i] = s.next();
            pair_right[i] = s.next();
        }

        // Create a HashSet to store unique pairs
        HashSet<String> h = new HashSet<String>();
        // Iterate over the pairs and add them to the HashSet
        for(int i=0;i<t;i++){
            h.add(pair_left[i]+" "+pair_right[i]);
            // Print the current size of the HashSet
            System.out.println(h.size());
        }
   }
}
```
