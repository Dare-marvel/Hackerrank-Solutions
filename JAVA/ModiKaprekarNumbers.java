// Link to the problem : https://www.hackerrank.com/challenges/kaprekar-numbers/problem

import java.util.Scanner;

public class ModiKaprekarNumbers {

    boolean KapCheck(Long n){
        String str=Long.toString(n);
        int d=str.length();
        double r=(n*n)%(Math.pow(10,d));
        if(((n*n-r)/(Math.pow(10,d)))+r==n){
            System.out.print(n+" ");
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int flag=0;
        //System.out.println("Enter the lower bound");
        Long p=sc.nextLong();
        //System.out.println("Enter the upper bound");
        Long q=sc.nextLong();
        ModiKaprekarNumbers m= new ModiKaprekarNumbers();
        for(Long i=p;i<=q;i++){
            if(m.KapCheck(i)){
                flag=1;
            }
        }
        if(flag==0){
            System.out.println("INVALID RANGE");
        }
    }
}
