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
    int x,y,k,l;
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1;i++){
            x=i;
            y=i+1;
            k=a[x];
            l=a[y];
            if(l<k)
            {
                a[i]=l;
                a[i+1]=k;

            }
        }
    }
    printf("The sorted elements are:");
    for(int i=0;i<n;i++)
    {
        printf("  %d  ",a[i]);

    }
}