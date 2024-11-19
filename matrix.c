#include <stdio.h>

void main(){
    int r,c;
    printf("Enter the no of rows:");
    scanf("%d",&r);
    printf("Enter the no of columns:");
    scanf("%d",&c);
    int a[r][c];
    int x=0;
    int count=0;
    goto varall;
    varall:
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(x==0){
                printf("Enter the element at position [%d][%d]:",i,j);
                scanf("%d",&a[i][j]);
                }
                else{
                    if(count<r)
                    {
                        printf("%d", a[i][j]);
                        count++;
                    }
                }
            }
        }
    x=1;
    printf("\n\nThe matrix is:\n");
    goto varall;
    int com=0;
    int calc=0;
    while(com==0){
        printf("Enter 1 to multiply to itself, 2 to add to itself, 3 to substract itself:");
        scanf("%d",&calc)
    }

}