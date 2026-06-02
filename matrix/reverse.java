import java.util.*;
public class reverse {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int mat[][]=new int[n][n];
        System.out.println("Enter the element of matrix");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=sc.nextInt();

            }
        }
        // reverse by row
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++){
                System.out.print(mat[i][j]+" ");
            }
        }
        sc.close();


    }
}
