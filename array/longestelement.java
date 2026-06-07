import java.util.*;
public class longestelement {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
       
        int arr[]=new int[100];
        System.out.println("Enter the array");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int max=0;
        for(int i=1;i<n;i++){
            if(max < arr[i]){
                max=arr[i];

            }

        }
        System.out.println(max+" ");
        sc.close();
    }
}
