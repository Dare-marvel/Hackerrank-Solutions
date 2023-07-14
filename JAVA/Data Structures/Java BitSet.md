### [Java BitSet](https://www.hackerrank.com/challenges/java-bitset/problem?isFullScreen=true)
### [References](https://www.baeldung.com/java-bitset)

## Explanation:
This code reads two integers `n` and `m` from standard input, creates two `BitSet` objects `b1` and `b2` with size `n`, and then reads and processes `m` operations on these `BitSet`s. The operations include `AND`, `OR`, `XOR`, `FLIP`, and `SET`. After each operation, the code prints the cardinality (number of set bits) of both `BitSet`s. At the end, it closes the `Scanner` object to avoid resource leak.

Here is a detailed explanation of the main logic of the code:

1. The code starts by creating a new `Scanner` object to read input from standard input.
2. It then reads two integers `n` and `m` from standard input using the `nextInt()` method of the `Scanner` class.
3. It consumes the newline character left by the previous call to `nextInt()` using the `nextLine()` method of the `Scanner` class.
4. It creates two new `BitSet` objects `b1` and `b2` with size `n`.
5. It enters a loop that runs for `m` iterations to read and process `m` operations.
6. In each iteration of the loop, it reads a line of input using the `nextLine()` method of the `Scanner` class, and splits it into an array of strings using the `split()` method of the `String` class.
7. It uses a switch statement to handle different operations based on the first element of the array.
8. For each operation, it performs the corresponding operation on the specified BitSet (`b1` or `b2`) using methods such as `and()`, `or()`, and so on.
9. After performing each operation, it prints the cardinality (number of set bits) of both BitSets using the `cardinality()` method of the BitSet class.
10. At the end, it closes the Scanner object to avoid resource leak.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(m), where m is the number of operations, since it performs m operations in a loop.

### `Space Complexity`:
The space complexity is O(n), where n is the size of each BitSet, since it creates two BitSets with size n.

## Code:
```java
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        // Create a new Scanner object to read input from standard input
        Scanner sc = new Scanner(System.in);
        
        // Read two integers n and m from standard input
        int n ,m;
        n = sc.nextInt();
        m = sc.nextInt();
        
        // Consume the newline character left by nextInt()
        sc.nextLine();
        
        // Create two BitSet objects b1 and b2 with size n
        BitSet b1 = new BitSet(n);
        BitSet b2 = new BitSet(n);
        
        // Loop m times to read and process m operations
        for(int i=0;i<m;i++){
            // Read a line of input and split it into an array of strings
            String choice = sc.nextLine();
            String [] arr = choice.split(" ", 3);
            
            // Use a switch statement to handle different operations
            switch(arr[0]){
                case "AND":
                {
                    // Perform an AND operation on the specified BitSet
                    if(arr[1].equals("1")){
                        b1.and(b2);  
                    }
                    else{
                       b2.and(b1);   
                    }
                    // Print the cardinality (number of set bits) of both BitSets
                    System.out.println(b1.cardinality() +" "+ b2.cardinality());
                    break;
                }
                case "OR":
                {
                    // Perform an OR operation on the specified BitSet
                    if(arr[1].equals("1")){
                        b1.or(b2);  
                    }
                    else{
                       b2.or(b1);   
                    }
                    // Print the cardinality (number of set bits) of both BitSets
                    System.out.println(b1.cardinality() +" "+ b2.cardinality());
                    break;
                }
                case "XOR":
                {
                    // Perform an XOR operation on the specified BitSet
                    if(arr[1].equals("1")){
                        b1.xor(b2);  
                    }
                    else{
                       b2.xor(b1);   
                    }
                    // Print the cardinality (number of set bits) of both BitSets
                    System.out.println(b1.cardinality() +" "+ b2.cardinality());
                    break;
                }
                case "FLIP":
                {
                    // Flip the specified bit in the specified BitSet
                    if(arr[1].equals("1")){
                        b1.flip(Integer.parseInt(arr[2]));
                    }
                    else{
                        b2.flip(Integer.parseInt(arr[2]));
                    }
                    // Print the cardinality (number of set bits) of both BitSets
                    System.out.println(b1.cardinality() +" "+ b2.cardinality());
                    break;
                }
                case "SET":
                {
                    // Set the specified bit in the specified BitSet
                    if(arr[1].equals("1")){
                        b1.set(Integer.parseInt(arr[2]));
                    }
                    else{
                        b2.set(Integer.parseInt(arr[2]));
                    }
                    // Print the cardinality (number of set bits) of both BitSets
                    System.out.println(b1.cardinality() +" "+ b2.cardinality());
                    break;
                }
            } 
        }
        
        // Close the Scanner object to avoid resource leak
        sc.close();
    }
}
```
