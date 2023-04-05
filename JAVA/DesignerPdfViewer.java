// Link to the problem : https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

import java.util.Scanner;

public class DesignerPdfViewer {
    public static void main(String[] args) {
        int [] htarr= new int [26]; // Array to store the heights of letters
        Scanner sc= new Scanner(System.in);
        for (int i=0;i<26;i++) {
            // Input the heights of letters
            htarr[i] = sc.nextInt();
        }
        char [] carr= new char[10]; // Array to store the characters of the string
        String str;
        str= sc.next(); // Input the string
        carr= str.toCharArray(); // Convert the string to a character array
        int max=0; // Variable to store the maximum height
        for (int i=0;i<str.length();i++){
            if (htarr[carr[i]-97]>max){
                // Compare the height of the current character with the current maximum height
                // If it is greater, update the maximum height
                max=htarr[carr[i]-97];
            }
        }
        System.out.println(max*str.length()); // Print the area as product of maximum height and string length
    }
}
