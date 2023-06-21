### [Jumping on the clouds](https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem)

## Explanation of the code:
* Read the number of clouds from the user.
* Create an array to store the clouds.
* Read the values of the clouds from the user and store them in the array.
* Set the last element of the array to 1 to mark the end of the sequence.
* Declare a variable to store the number of jumps.
* Loop through the clouds, starting from the first element.
* Check if the next two elements in the array are both 0.
* If they are, increase the number of jumps by 1 and jump 2 clouds forward.
* Otherwise, increase the number of jumps by 1 and jump 1 cloud forward.
* Continue looping until reaching the last cloud.
* Print the number of jumps.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n) because it iterates over each cloud in the input array once to calculate the result.

### `Space Complexity`:
The space complexity is O(n) because it uses an array of size n+1 to store intermediate results.

## Code:
```java
import java.util.Scanner;

public class JumpingOnTheClouds{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(); // input the number of clouds
        int [] arr= new int[n+1]; // create an array to hold the clouds
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt(); // input the clouds
        }
        arr[n] = 1; // set the last cloud to 1 to mark the end
        int jmp=0; // variable to hold the number of jumps
        for(int i=0; i<n-1;){ // loop through the clouds
            if(arr[i+2]==0){ // check if it's possible to jump 2 clouds
                ++jmp; // increase the number of jumps
                i+=2; // jump 2 clouds
            }
            else{ // if not possible to jump 2 clouds
                ++jmp; // increase the number of jumps
                ++i; // jump 1 cloud
            }
        }
        System.out.println(jmp); // output the number of jumps
    }
}
```
