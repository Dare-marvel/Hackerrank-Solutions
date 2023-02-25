// Link to the problem : https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem

import java.util.Scanner;

public class JumpingOnTheClouds{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int [] arr= new int[n+1];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        arr[n] = 1;
        int jmp=0;
        for(int i=0; i<n-1;){
            if(arr[i+2]==0){
                ++jmp;
                i+=2;
            }
            else{
                ++jmp;
                ++i;
            }
        }
        System.out.println(jmp);
    }
}
