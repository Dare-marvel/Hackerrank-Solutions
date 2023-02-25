// Link to the problem : https://www.hackerrank.com/challenges/strange-advertising/problem

import java.util.Scanner;

public class ViralAdvertising {
    public static void main(String[] args) {
        //Method 1
//        int n;
//        Scanner sc= new Scanner(System.in);
//        ///System.out.println("Enter the number of days:");
//        n=sc.nextInt();
//        int [] c= new int[n+1];
//        int [] l= new int[n+1];
//        c[1]=Math.floorDiv(5,2);
//        l[1]=c[1];
//        for(int i=2;i<=n;i++){
//            l[i]=Math.floorDiv(l[i-1]*3,2);
//            c[i]=l[i]+c[i-1];
//        }
//      //  System.out.println("The final cumulative distribution is:");
//        System.out.println(c[n]);
        //Method 2
        int n;
        Scanner sc= new Scanner(System.in);
        //System.out.println("Enter the number of days:");
        n=sc.nextInt();
        int like=2;
        int cum=2;
        for (int i=0;i<n-1;i++){
            like=Math.floorDiv(like*3,2);
            cum=like+cum;
        }
      //  System.out.println("The final cumulative distribution is:");
        System.out.println(cum);
    }
}
