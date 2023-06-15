### [Append and Delete](https://www.hackerrank.com/challenges/append-and-delete/problem)

## Explanation:
This code is a Java program that determines whether it is possible to convert one string into another by performing a given number of append and delete operations. Here's how it works:

1. The program takes two strings `s` and `t` as input from the user, representing the initial and final strings respectively.
2. It then takes an integer `k` as input from the user, representing the number of operations that can be performed.
3. The program compares the characters of `s` and `t` until a mismatch is found and calculates the number of characters to be deleted from `s` and appended to `s` to reach `t`.
4. It then checks if it is possible to reach `t` from `s` in `k` steps using a series of if-else statements and prints the result.

## Time and Space Complexity:
### `Time Complexity:`
The time complexity of this code is O(min(s.length(), t.length())) because it iterates over each character in the shorter of the two input strings once to find the first mismatch.

### `Space Complexity:`
The space complexity is O(1) because it uses only a few variables to store intermediate results.

## Code:
```java
import java.util.*;

public class AppendAndDelete {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        // Input the initial string:
        String s=sc.next();
        // Input the final string:
        String t=sc.next();
        // Enter the steps:
        int k=sc.nextInt();

        int del=0,app = 0,rem=0,cum=0;
        int flag=0;
        // Compare the characters of s and t until a mismatch is found
        for(int i=0;i<Math.min(s.length(), t.length());i++){
            if(s.charAt(i)!=t.charAt(i)){
                del=s.length()-i;
                app=t.length()-i;
                flag=1;
                break;
            }
        }
        if(flag==0){
            // If no mismatch is found, set del and app based on the lengths of s and t
            if(s.length()>t.length()){
                del=s.length()-t.length();       
            }
            else {
                app=t.length()-s.length();
            }
        }
        // Final result:
        if(s.equals(t)){
            // If s and t are equal, check if 2*s.length() is less than or equal to k, or if k is even
            if(2*s.length()<=k || k%2==0){
                System.out.println("Yes");
            }
            else {
                System.out.println("No");
            }
        }
        else if(del+app==k){
            // If del + app is equal to k, it is possible to reach t from s in k steps
            System.out.println("Yes");
        }
        else if(del+app<k){
            // If del + app is less than k, it is possible to reach t from s in k steps
            if(app==0){
                // If app is 0, check if (k-del) is even or if del + 2*(s.length()-del) is less than or equal to k
                if((k-del)%2==0 || del+2*(s.length()-del)<=k){
                    System.out.println("Yes");
                }
                else {
                    System.out.println("No");
                }
            }
            else if (del==0) {
                // If del is 0, check if app + 2*s.length() is less than or equal to k, or if (k-app) is even
                if(app+2*s.length()<=k ||(k-app)%2==0 ){
                    System.out.println("Yes");
                }
                else{
                    System.out.println("No");
                }
            }
            else {
                // If del and app are both non-zero, it is possible to reach t from s in k steps
                System.out.println("Yes");
            }
        }
        else {
            // If del + app is greater than k, it is not possible to reach t from s in k steps
            System.out.println("No");
        }
    }
}
```
