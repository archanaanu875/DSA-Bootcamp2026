// 90'o rotation.......
import java.util.*;

public class rotatematrix{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println("enter the matrix");
        int mat[][]=new int[n][n];
        int trans[][]=new int [n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 mat[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                trans[i][j]=mat[j][i];
            }
        }
        // now reverse the element in col wise
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
                System.out.print(trans[i][j]+ " ");
            }
            
        }
        sc.close();

    }
}
