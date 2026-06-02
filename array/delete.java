//delete the smallest element in an array
import java.util.*;
public class delete {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int i;
        int arr[]=new int[n];
        int arr1[]=new int[n];
        System.out.println("enter the element in array:");
        for(i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int min=0;
        for(i=1;i<n;i++){
            if(arr[i]<arr[min]){
                
                min=i;
            }
            
        }
        for(i=0;i<n;i++){
            if(i==min){
                continue;
            }
            //remove the min value and store in another array and print
            
            
            // arr1[i]=arr[i];
            // System.out.print(arr1[i]+ " ");

            // System.out.print(arr[i]+ " ");
        }

        // delete and shift the value on index
        for(i=n-1;i>min;i--){
            arr[i]=arr[i+1];
        }
        for(i=0;i<n-1;i++){
            System.out.print(arr[i]+" ");
        }

        sc.close();
        
    }
}
