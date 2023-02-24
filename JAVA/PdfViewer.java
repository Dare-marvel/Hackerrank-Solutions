import java.util.Scanner;

public class PdfViewer {
    public static void main(String[] args) {
        int [] htarr= new int [26];
        // System.out.println("Enter the heights of letters:");
        Scanner sc= new Scanner(System.in);
        for (int i=0;i<26;i++)
            htarr[i] = sc.nextInt();
        char [] carr= new char[10];
        String str;
        // System.out.println("Enter the string:");
        str= sc.next();
        carr= str.toCharArray();
        int max=0;
        for (int i=0;i<str.length();i++){

            if (htarr[carr[i]-97]>max){
                max=htarr[carr[i]-97];
            }
        }
    //    System.out.println("The area is "+max*str.length()+"mm^2");
       System.out.println(max*str.length());
    }
}
