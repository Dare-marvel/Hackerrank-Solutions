### [Picking Numbers](https://www.hackerrank.com/challenges/picking-numbers/problem?h_r=profile)

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
