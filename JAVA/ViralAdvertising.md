### [Viral Advertising](https://www.hackerrank.com/challenges/strange-advertising/problem)

## Explanation:
This code is a Java program that calculates the cumulative number of likes for a viral advertising campaign over a given number of days. Here's how it works:

1. The program takes an integer `n` as input from the user, representing the number of days for which the campaign runs.
2. It creates two arrays `c` and `l` of size `n+1` to store the cumulative number of likes and the number of likes on each day respectively.
3. The program initializes the first element of both arrays to 2, representing the number of people who liked the advertisement on the first day.
4. It then iterates over the remaining days and calculates the number of likes and cumulative likes for each day using a formula.
5. Finally, it prints the cumulative number of likes on the last day.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n) because it iterates over `n` days to calculate the result.

### `Space Complexity`:
 The space complexity is also O(n) because it uses two arrays of size `n+1` to store intermediate results.
 
## Code:
### Method 1:
<hr>

```java
import java.util.Scanner;

public class ViralAdvertising {
    public static void main(String[] args) {
        // Method 1: Using arrays to store the number of likes and cumulative likes on each day
        int n;
        Scanner sc= new Scanner(System.in);
        // Get the number of days from the user
        n=sc.nextInt();
        int [] c= new int[n+1]; // Create an array to store the cumulative number of likes on each day
        int [] l= new int[n+1]; // Create an array to store the number of likes on each day
        c[1]=Math.floorDiv(5,2); // Initialize the cumulative number of likes on the first day to 2
        l[1]=c[1]; // Initialize the number of likes on the first day to 2
        // Iterate over the remaining days and calculate the number of likes and cumulative likes
        for(int i=2;i<=n;i++){
            l[i]=Math.floorDiv(l[i-1]*3,2); // Calculate the number of likes on the current day
            c[i]=l[i]+c[i-1]; // Calculate the cumulative number of likes up to the current day
        }
        // Print the final cumulative number of likes
        System.out.println(c[n]);
    }
}
```

-----------------------------------------------------------------------------------------------------------------------------------------

### Method - 2

## Explanation:
This code is another Java program that calculates the cumulative number of likes for a viral advertising campaign over a given number of days. Here's how it works:

1. The program takes an integer `n` as input from the user, representing the number of days for which the campaign runs.
2. It initializes two variables `like` and `cum` to 2, representing the number of people who liked the advertisement on the first day and the cumulative number of likes respectively.
3. The program then iterates over the remaining days using a for loop and calculates the number of likes and cumulative likes for each day using a formula.
4. Finally, it prints the cumulative number of likes.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n) because it iterates over `n` days to calculate the result.
### `Space Complexity`:
The space complexity is O(1) because it uses only two variables to store intermediate results.

<hr>

```java
import java.util.Scanner;

public class ViralAdvertising {
    public static void main(String[] args) {
        // Method 2: Using a for loop to iterate over the days
        int n;
        Scanner sc= new Scanner(System.in);
        // Get the number of days from the user
        //System.out.println("Enter the number of days:");
        n=sc.nextInt();
        int like=2; // Initialize the number of people who liked the advertisement on the first day to 2
        int cum=2; // Initialize the cumulative number of people who have liked the advertisement to 2
        // Iterate over the remaining days and calculate the number of people who liked the advertisement and the cumulative number of likes
        for (int i=0;i<n-1;i++){
            like=Math.floorDiv(like*3,2); // Calculate the number of people who liked the advertisement on the current day
            cum=like+cum; // Update the cumulative number of people who have liked the advertisement
        }
        // Print the final cumulative number of likes
        //System.out.println("The final cumulative distribution is:");
        System.out.println(cum);
    }
}
```
