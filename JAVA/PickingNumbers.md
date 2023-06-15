### [Picking Numbers](https://www.hackerrank.com/challenges/picking-numbers/problem?h_r=profile)

## Explanation:
This code is a Java program that calculates the maximum number of integers that can be chosen from an array such that the absolute difference between any two of the chosen integers is less than or equal to 1. Here's how it works:

1. The program takes an integer `n` as input from the user, representing the number of elements in the array.
2. It then creates an array `arr` of size `n` and takes `n` integers as input from the user to populate the array.
3. The program sorts the array in ascending order for easier comparison.
4. It then iterates over each element in the sorted array and counts the number of consecutive elements that satisfy the condition that their absolute difference is less than or equal to 1.
5. The program keeps track of the maximum count of such consecutive elements and updates it whenever a larger count is found.
6. Finally, it prints the maximum count.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n log n) because it uses the `Arrays.sort()` method to sort the input array, which has a time complexity of O(n log n).

### `Space Complexity`:
The space complexity is O(n) because it uses an array of size n to store intermediate results.

## Code:
### Method - 1
<hr>

```java
import java.util.Arrays;
import java.util.Scanner;

public class PickingNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the value of n:");
        int n = sc.nextInt(); // Inputting the value of n
        int[] arr = new int[n]; // Creating an array to store the elements
        int maxcount = 0; // Variable to store the maximum count of consecutive elements
        // System.out.println("Enter the elements of the array:");
        int j = 0;
        while (j < n) {
            arr[j] = sc.nextInt(); // Inputting the elements of the array
            j++;
        }
        int count = 1; // Variable to store the count of consecutive elements
        Arrays.sort(arr); // Sorting the array for easier comparison
        int i = 1; // Starting index for iteration
        int c = arr[0]; // Variable to store the current element for comparison
        while (i < n) {
            if (Math.abs(c - arr[i]) <= 1) {
                count++; // Incrementing count if the difference between current and next element is <= 1
            }
            if (Math.abs(c - arr[i]) > 1 || i == n - 1) {
                // If the difference between current and next element is > 1 or it's the last element
                if (count > maxcount) {
                    maxcount = count; // Updating maxcount if count is greater
                }
                count = 1; // Resetting count for the next subarray
                c = arr[i]; // Updating c with the next element for comparison
            }
            i++;
        }
        System.out.println(maxcount); // Printing the maximum count of consecutive elements
    }
}
```
---------------------------------------------------------------------------------------------------------------------------------------

### Method - 2
## Explanation:


## Time and Space Complexity:
### `Time Complexity`:

### `Space Complexity`:


<hr>

```java
import java.util.*;

public class PickingNumbers {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(); // Input number of elements
        int[] arr=new int[n]; // Initialize an array to store the elements
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt(); // Input elements of the array
        }
        int a=1,b=1; // Initialize counters a and b to keep track of consecutive elements
        Arrays.sort(arr); // Sort the array in ascending order
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(Math.abs(arr[i]-arr[j])<=1){ // Check if the absolute difference between elements is less than or equal to 1
                    a++; // Increment counter a
                }
                else{
                    if(a>b){ // Update counter b with the maximum consecutive count
                        b=a;
                    }
                    a=1; // Reset counter a
                    break; // Exit the inner loop
                }
            }
            if(a>b){ // Update counter b with the maximum consecutive count
                b=a;
            }
            a=1; // Reset counter a
        }
        System.out.print(b); // Print the maximum consecutive count
    }
}
```
