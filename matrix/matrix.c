#include<stdio.h>
#include<stdlib.h>
int main(){
    int mat[100][100],trans[100][100];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            trans[i][j]=mat[j][i];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",trans[i][j]);
        }
    }
    return 0;
}






// multiple of matrix.......

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int mat1[100][100],mat2[100][100],mul[100][100];
//     int n,m,i,j;
//     scanf("%d %d",&n,&m);
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             scanf("%d",&mat1[i][j]);
//         }
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             scanf("%d",&mat2[i][j]);
//         }
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             mul[i][j]=0;
            
//         }
//     }
    


// }