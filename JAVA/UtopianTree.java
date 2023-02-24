import java.util.Scanner;

public class UtopianTree {
    public static void main(String[] args) {
        int t,n,h;
        Scanner sc= new Scanner(System.in);
        //System.out.println("Enter the number of test-cases");
        t=sc.nextInt();
        while(t>0){
            h=1;
           // System.out.println("Enter the value of n:");
            n=sc.nextInt();
            for (int i=1;i<=n;i++){
                if(i%2!=0){
                    h=h*2;
                }
                else{
                    h=h+1;
                }
            }
           // System.out.println("The height of the tree is:");
            System.out.println(h);
            t--;
        }
    }
}
