// Link to problem : https://www.hackerrank.com/challenges/append-and-delete/problem


import java.util.*;
public class AppendAndDelete {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //System.out.println("Input the initial string:");
        String s=sc.next();
        //System.out.println("Input the final string:");
        String t=sc.next();
        //System.out.println("Enter the steps:");
        int k=sc.nextInt();

        int del=0,app = 0,rem=0,cum=0;
        int flag=0;
        for(int i=0;i<Math.min(s.length(), t.length());i++){
            if(s.charAt(i)!=t.charAt(i)){
                del=s.length()-i;
                //System.out.println("del:"+del);
                app=t.length()-i;
               // System.out.println("app:"+app);
                flag=1;
                break;
            }
        }
        if(flag==0){
            if(s.length()>t.length()){
                del=s.length()-t.length();
          
            }
            else {
                app=t.length()-s.length();
            }
        }
//        System.out.println("Final result:");
        if(s.equals(t)){
            if(2*s.length()<=k || k%2==0){
                System.out.println("Yes");
            }
            else {
                System.out.println("No");
            }
        }
        else if(del+app==k){
            System.out.println("Yes");
        }
        else if(del+app<k){
            if(app==0){
                if((k-del)%2==0 || del+2*(s.length()-del)<=k){
                    System.out.println("Yes");
                }
                else {
                    System.out.println("No");
                }
            }
            else if (del==0) {
                if(app+2*s.length()<=k ||(k-app)%2==0 ){
                    System.out.println("Yes");
                }
                else{
                    System.out.println("No");
                }
            }
            else {
                System.out.println("Yes");
            }
        }
        else {
            System.out.println("No");
        }
    }
}
