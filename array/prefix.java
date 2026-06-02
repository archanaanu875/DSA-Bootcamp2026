// import java.util.*;
import java.util.Scanner;

public class prefix{
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        // input
        System.out.println("Enter the size of array");
        int n=sc.nextInt();

        int arr[]=new int[n];
        int prefix[]=new int[n];

        //array input
        System.out.println("enter the array");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        //prefixsum
        prefix[0]+=arr[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+arr[i];
        }
        for(int i=0;i<n;i++){
            System.out.print(prefix[i] +" ");
        }
        // int left=arr[0];
        // int right=arr[n-1];
        int left=sc.nextInt();
        int right=sc.nextInt();
        
        int sum;
        if(left==0){
            sum=prefix[right];
        }
        else{
            sum=prefix[right]-prefix[left-1];
        }
        System.out.println("sum of between index" +left+ "and" +right+ "=" +sum);
        sc.close();


    }
}


