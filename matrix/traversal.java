// sprial travesal in matrix........

import java.util.*;
public class traversal {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int mat[][]=new int[n][n];
        System.out.println("Enter the element of array");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=sc.nextInt();
            }
        }
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;

        while(top<=bottom && left<=right){
            //top row
            for(int i=left;i<=right;i++){
                System.out.print(mat[top][i]+" ");
                
            }
            top++;
            // right column
            for(int i=top;i<=bottom;i++){
                System.out.print(mat[i][right]+" ");

            }
            right--;
            
            // last row
            if(top<=bottom){
                for(int j=right;j>=left;j--){
                    System.out.print(mat[bottom][j]+" ");
                }
                bottom--;
            }
            //first column
            if(left<=right){
                for(int j=bottom;j>=top;j--){
                    System.out.print(mat[j][left]+" ");
                }
                left++;
            }
            
        }
        sc.close();
    }
    
}
