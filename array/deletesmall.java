import java.util.*;
public class deletesmall {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int min=0;
        for(int i=1;i<n;i++){
            if(arr[min]>arr[i]){
                
                min=i;
            }
        }
        
        for(int i=min;i<n-1;i++){
            arr[i]=arr[i+1];
            
        }
        n--;

        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        sc.close();
    }
}
