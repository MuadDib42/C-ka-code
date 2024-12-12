#include <stdio.h>
void main(){
    int found=0,n=0;
    printf("enter length:");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element:");
        scanf("%d",&a[i]);
    }
    int serele;
    printf("Enter a no to search linearly:");
    scanf("%d",&serele);
    for(int j=0;j<n;j++)
    {
        if(a[j]==serele){
            found=1;
        }
    }
    if(found==0){
        printf("element not found");
    }
    else{
        printf("Element found");
    }
}