import java.util.*;
public class boundaryE {
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        int n=sc.nextInt();
        int sum=0;
        int mat[][]=new int[n][n];
        System.out.println("enter the element in array");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0 || i==(n-1) || j==(n-1)){
                    // System.out.print(mat[i][j]+ " ");
                    sum+=mat[i][j];
                    
                }
            }
            
        }
        System.out.println(sum+" ");
        sc.close();
    }
}
