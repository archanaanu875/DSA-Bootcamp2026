import java.util.*;
public class delete {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int r=sc.nextInt();
        int c=sc.nextInt();
        int mat[][]=new int[r][c];
        System.out.println("enter the matrix element");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                mat[i][j]=sc.nextInt();

            }
        }
        

        System.out.println("enter the position to delete:");
        int pos=sc.nextInt();
        System.out.println(pos);
        
        int result[][]=new int[r][c-1];

        // remove column element
        for(int i=0;i<r;i++){
            int k=0;
            for(int j=0;j<c;j++){
                if(j==pos){
                    continue;
                }
                result[i][k]=mat[i][j];
                k++;
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c-1;j++){
                System.out.print(result[i][j]+" ");
            }
        }
        sc.close();
    }
}
