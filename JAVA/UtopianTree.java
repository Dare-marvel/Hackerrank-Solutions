// Link to the problem : https://www.hackerrank.com/challenges/utopian-tree/problem#:~:text=The%20Utopian%20Tree%20goes%20through,at%20the%20onset%20of%20spring.

import java.util.Scanner;

public class UtopianTree {
    public static void main(String[] args) {
        int t,n,h; // Declare variables to store the number of test cases, the number of growth cycles, and the height of the tree
        Scanner sc= new Scanner(System.in);
        // Get the number of test cases from the user
        //System.out.println("Enter the number of test-cases");
        t=sc.nextInt();
        // Iterate over the test cases and calculate the height of the tree for each case
        while(t>0){
            h=1; // Initialize the height of the tree to 1
            // Get the number of growth cycles from the user
            //System.out.println("Enter the value of n:");
            n=sc.nextInt();
            // Iterate over the growth cycles and calculate the height of the tree after each cycle
            for (int i=1;i<=n;i++){
                if(i%2!=0){ // If the cycle number is odd, double the height of the tree
                    h=h*2;
                }
                else{ // If the cycle number is even, add 1 to the height of the tree
                    h=h+1;
                }
            }
            // Print the final height of the tree
            //System.out.println("The height of the tree is:");
            System.out.println(h);
            t--; // Decrement the number of test cases
        }
    }
}

