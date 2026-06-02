import java.util.*;
public class frequency {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
            String str=sc.next();
            int freq[]=new int[256];
            int len=str.length();
            for(int i=0;i<len;i++){
                freq[str.charAt(i)]++;  // str.charAt isliye use krte hai ---for specific character ke liye
            }
            for(int i=0;i<256;i++){
                if(freq[i]>0){
                    System.out.println((char)i+ " " +freq[i]);   // i value ko typecast kr rhe hai agar hum only i print 
                }                                                // krte hai tab 97 value print hoga nd jb type cast krege to
                                                                // ye specific character print krega 
            }
            sc.close();
        }
    }

