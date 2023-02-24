import java.util.*;
public class FindDigits {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //System.out.println("Enter the number of testcases");
        int t=sc.nextInt();
        while(t>0){
           // System.out.println("Enter the number:");
            int n=sc.nextInt();
            int num=n;
            int div;
            int count=0;
            while(num>0){
                div=num%10;
                if(div>0) {
                    if (n % div == 0) {
                        count++;
                    }
                }
                num/=10;
            }
            //System.out.println("Output");
            System.out.println(count);
            t--;
        }
    }
}
