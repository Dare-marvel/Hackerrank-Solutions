### [Repeated String](https://www.hackerrank.com/challenges/repeated-string/problem)
                      
## Code:
```java
import java.util.Scanner;

public class RepeatedStrings {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int c=0;

        // Prompt user to input string and length of characters to check
        String str=sc.next();
        
        long n=sc.nextLong();

        // Convert string to character array and count occurrences of "a"
        char [] arr= new char[str.length()];
        arr=str.toCharArray();
        for (char ch:arr) {
            if(ch=='a'){
                c++;
            }
        }

        // Calculate the total number of occurrences of "a" in the first n characters of the infinitely repeating string
        Long tot=c*(n/arr.length);
        for(int i=0;i<(n% arr.length);i++){
            if(arr[i]=='a'){
                tot++;
            }
        }

        // Print the result
        System.out.println(tot);
    }
}
```
