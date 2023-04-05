// Link to the problem : https://www.hackerrank.com/challenges/find-digits/problem

import java.util.*;

public class FindDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Input the number of test cases
        int t = sc.nextInt();
        while (t > 0) {
            // Input the number
            int n = sc.nextInt();
            int num = n;
            int div;
            int count = 0;
            // Extract digits from the number
            while (num > 0) {
                div = num % 10;
                if (div > 0) {
                    // Check if the digit is a divisor of the number
                    if (n % div == 0) {
                        count++;
                    }
                }
                num /= 10;
            }
            // Output the result
            System.out.println(count);
            t--;
        }
    }
}

