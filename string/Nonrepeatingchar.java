// Print first non repeating character........

import java.util.*;
public class Nonrepeatingchar {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string:");
        String str=sc.nextLine();
        int freq[]=new int[256];
        int len=str.length();
        for(int i=0;i<len;i++){
            freq[str.charAt(i)]++;
        }
        for(int i=0;i<256;i++){
            if(freq[str.charAt(i)]==1){
                System.out.println(str.charAt(i)+" ");
                break;
            }
        }
        System.out.println("Non repeating character");
        sc.close();

    }
}
