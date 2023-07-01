### [Java Subarray](https://www.hackerrank.com/challenges/java-negative-subarray/problem?isFullScreen=true)

## Explanation:
This code counts the number of subarrays in an array that have a negative sum. Here is the main logic of the code:

1. The `main` method reads an integer `n` from standard input, which represents the size of the array.
2. An array `A` of size `n` is created to store the elements of the array.
3. The method reads `n` integers from standard input and stores them in the array `A`.
4. A variable `count` is initialized to 0 to keep track of the number of subarrays with a negative sum.
5. The method uses two nested loops to iterate over all possible subarrays of the array.
6. For each subarray, the method calculates its sum.
7. If the sum is negative, the method increments the `count` variable.
8. After all subarrays have been checked, the method prints the value of `count`, which represents the number of subarrays with a negative sum.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n^2), where n is the size of the array. This is because the code uses two nested loops to iterate over all possible subarrays of the array.

### `Space Complexity`:
The space complexity of this code is O(n), because it uses an array of size n to store the elements of the array.

## Code:
```java
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        // Read input from STDIN
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        // Create an array to store the elements of the array
        int [] A = new int[n];
        
        // Read the elements of the array from standard input
        for(int i=0;i<n;i++){
            A[i] = sc.nextInt();    
        }
        
        // Initialize a variable to keep track of the number of subarrays with a negative sum
        int count = 0;
        
        // Iterate over all possible subarrays of the array
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                // Calculate the sum of the current subarray
                sum += A[j];
                // If the sum is negative, increment the count variable
                if(sum<0){
                    count++;
                }
            }
        }
        
        // Print the result
        System.out.println(count);
    }
}

```
