### [Java Anagrams](https://www.hackerrank.com/challenges/java-anagrams/problem)

## Explanation:
This code checks if two strings are anagrams. Here is the main logic of the code:

1. The `isAnagram` method takes two strings as input.
2. If the lengths of the strings are not equal, they cannot be anagrams, so the method returns `false`.
3. Two arrays are created to store the frequency of characters in each string.
4. The method loops through the first string and updates the frequency of characters in the first array.
5. The method then loops through the second string and updates the frequency of characters in the second array.
6. The method compares the frequency of characters in both arrays.
7. If all characters have the same frequency, then the strings are anagrams and the method returns `true`. Otherwise, it returns `false`.

## Time and Space Complexity:
### `Time Complexity`:
The time complexity of this code is O(n), where n is the length of the strings. This is because the code loops through each character in both strings once.

### `Space Complexity`:
The space complexity of this code is O(1), because the size of the arrays used to store the frequency of characters is constant (26 characters in the alphabet).

## Code:
```java
import java.util.Scanner;

public class Solution {

    // Method to check if two strings are anagrams
    static boolean isAnagram(String a, String b) {
        // If the lengths of the strings are not equal, they cannot be anagrams
        if(a.length() != b.length()){
            return false;
        }
        
        // Create two arrays to store the frequency of characters in each string
        int [] arr1 = new int[26];
        int [] arr2 = new int[26];
        
        // Loop through the first string and update the frequency of characters
        for(int i=0;i<a.length();i++){
            if(Character.isLowerCase(a.charAt(i))){
                arr1[(int)a.charAt(i) - 97] += 1;
            }
            else{
                arr1[(int)a.charAt(i) - 65] += 1;
            }
        }
        
        // Loop through the second string and update the frequency of characters
        for(int i=0;i<b.length();i++){
            if(Character.isLowerCase(b.charAt(i))){
                arr2[(int)b.charAt(i) - 97] += 1;
            }
            else{
                arr2[(int)b.charAt(i) - 65] += 1;
            }
        }
        
        // Compare the frequency of characters in both strings
        for(int i=0;i<26;i++){
            if(arr1[i] != arr2[i]){
                return false;
            }
        }
        
        // If all characters have the same frequency, the strings are anagrams
        return true;
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        
        // Call the isAnagram method to check if the strings are anagrams
        boolean ret = isAnagram(a, b);
        
        // Print the result
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}

```
