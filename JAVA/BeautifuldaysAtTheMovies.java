// Link to the problem : https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem

import java.util.Scanner;
class Reverse{
    int rev(int num){
        int rn=0;
        while(num>0) {
            rn = 10*rn + num % 10;
            num=num/10;
        }
        return rn;
    }
}
public class BeautifuldaysAtTheMovies{
    public static void main(String[] args) {
        int n1,n2,count=0;
        Reverse r= new Reverse();
        Scanner sc= new Scanner(System.in);
        //System.out.println("Starting day:");
        n1=sc.nextInt();
      // System.out.println("Ending day:");
        n2=sc.nextInt();
       //System.out.println("Divisor");
       float k=sc.nextInt();
        for(int i=n1;i<=n2;i++){
          //  System.out.println("Reverse of "+i+" is "+r.rev(i));
            float c=(Math.abs(i-r.rev(i)))/k;
            if(c==Math.round(c)){
                count++;
            }
        }
        //System.out.println("The number of beautiful days are:");
        System.out.println(count);
    }
}
