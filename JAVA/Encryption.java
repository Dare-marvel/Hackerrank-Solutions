import java.util.*;

public class Encryption {
    public static void main(String[] args) {
        char [][] arr;
        Scanner sc=new Scanner(System.in);
        //System.out.println("Enter the original string");
        String orig_str=sc.nextLine();
        orig_str=orig_str.replaceAll("\\s","");

        double a = Math.sqrt(orig_str.length());
        double ub=Math.ceil(a);
        double lb=Math.floor(a);
        int col=(int)ub;
        int row=(int)lb;

        if(ub*lb < orig_str.length()){
            row=col;
            arr=new char[row][col];
        }
        else{
            arr=new char[row][col];
        }

        int k=0;
        for (int i=0;i<row;i++){
            int j=0;
            while(j<col && k<orig_str.length()){
               arr[i][j]=orig_str.charAt(k);
               j++;
               k++;
            }
        }
        //System.out.println("Final String");
        for (int i=0;i<col;i++){
            for (int j=0;j<row;j++){
                if(Character.isLetter(arr[j][i])){
                    System.out.print(arr[j][i]);
                }
            }
            System.out.print(" ");
        }
    }
}
