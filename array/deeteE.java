import java.util.*;
public class deeteE {

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int i;
        int arr[]=new int[n];
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
            
        }
        sc.close();
        
    }
}

