import java.util.*;
public class insert {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int r=sc.nextInt();
        int c=sc.nextInt();
        int mat[][]=new int[r][c];
        System.out.println("Enter the element in matrix");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                mat[i][j]=sc.nextInt();
            }
        }
        System.out.println("enter the position");
        int pos=sc.nextInt();
        int newcol[]=new int[r];
        System.out.println("enter the column element");
        for(int i=0;i<r;i++){
            newcol[i]=sc.nextInt();
        }
        // insert by making another matrix and copy element on it
        int result[][]=new int[r][c+1];
        for(int i=0;i<r;i++){
            for(int j=0;j<pos;j++){
                result[i][j]=mat[i][j];
            }
            result[i][pos]=newcol[i];

            for(int j=pos;j<c;j++){
                result[i][j+1]=mat[i][j];
            }
        }
        System.out.println("insert matrix");
        for(int i=0;i<r;i++){
            for(int j=0;j<c+1;j++){
                System.out.print(result[i][j]+" ");
            }
        }
        sc.close();

    }
}
