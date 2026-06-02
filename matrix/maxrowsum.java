import java.util.*;
public class maxrowsum {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int sum=0,max=0;
        int mat[][]=new int[r][c];
        System.out.println("enter the element in matrix");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                mat[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                sum+=mat[i][j];
            
            }
            
            if(sum>max){
                max=sum;
                System.out.println(max+" ");
                break;
            }

        }
    }
}
