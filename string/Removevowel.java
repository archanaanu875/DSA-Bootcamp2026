import java.util.*;
public class Removevowel {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        String str=sc.nextLine();
        int len=str.length();
        for(int i=0;i<len;i++){
            char ch=Character.toLowerCase(str.charAt(i));
            if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'){
                continue;
            }
            System.out.print(str.charAt(i)+" ");
        }
        sc.close();

    }
}
