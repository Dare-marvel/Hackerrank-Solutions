[Jumping on the clouds](https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem)

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
