import java.util.Scanner;

public class RepeatedStrings {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int c=0;


       // System.out.println("Enter the string:");
        String str=sc.next();

        //System.out.println("Enter the length of characters to check:");
        long n=sc.nextLong();

        char [] arr= new char[str.length()];
         arr=str.toCharArray();
        for (char ch:arr) {
            if(ch=='a'){
                c++;
            }
        }
        Long tot=c*(n/arr.length);
        for(int i=0;i<(n% arr.length);i++){
            if(arr[i]=='a'){
                tot++;
            }
        }
        //System.out.println("The number of characters in the array is");
        System.out.println(tot);
    }
}
