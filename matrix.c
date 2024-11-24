#include <stdio.h>
void main(){
    int r1,c1,r2,c2;
    printf("Enter r1,c1:");
    scanf("%d,%d",&r1,&c1);
    int a1[r1][c1];
    printf("Enter r2,c2:");
    scanf("%d,%d",&r2,&c2);
    int a2[r2][c2];
    for(int i=0;i<r1;i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("For matrix 1 enter %d%dth element:",i,j);
            scanf("%d",&a1[i][j]);            
        }
        
    }
    for(int i=0;i<r2;i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("For matrix 2 enter %d%dth element:",i,j);
            scanf("%d",&a2[i][j]);            
        }
        
    }
    if(c1!=r2){
        printf("The matrices are not multplicable");
    }
    else{
        int c[r1][c2];
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++)
            {
                for(int k=0;k<c1;k++){
                    c[i][j]=0;
                    c[i][j]+=a1[i][k]*a2[k][j];
                }                
                
            }
        }
        printf("Here is the new matrix:\n");
        for(int i=0;i<r1;i++)
        {
            printf("[");
            for(int j=0;j<c2;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("]");
            printf("\n");
            
            
        }

    }

}
