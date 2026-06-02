// Negative at even position and then after reverse the row......
import java .util.*;
public class matrixq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int mat[][]=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=sc.nextInt();
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i%2==0){
                    mat[i][j]= -mat[i][j];
                }
            }
        }
        // then reverse column wise
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++){
                System.out.print(mat[i][j]+ " ");
            }
        }
        sc.close();
    }

    
}
