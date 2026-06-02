// Count vowel..... and consonant......
import java.util.*;
public class countvowel {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string");
        String str=sc.next();
        int len=str.length();
        int count=0;
        int found=0;
        for(int i=0;i<len;i++){
            char ch=Character.toLowerCase(str.charAt(i));
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                count++;
            }
            else{
                found++;
            }
        }
        System.out.println("Number of vowels:" +count);
        System.out.println("Number of consonant:" +found);
        sc.close();
    }
}
