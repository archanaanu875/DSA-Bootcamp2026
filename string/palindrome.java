import java.util.Scanner;


public class palindrome {
   public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the string");
    String str=sc.next();
    int len=str.length();
    int flag=0;
    for(int i=0;i<len/2;i++){
        if(str.charAt(i)!=str.charAt(len-i-1)){
            flag=1;
            break;
        }
    }
    if(flag==0){
        System.out.println("Palindrome");

    }
    else{
        System.out.println("NOT");
    }
    sc.close();
   } 
}
