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
    int data;
    printf("Enter a no to search binary wise:");
    scanf("%d",&data);
    int f=0,l=n-1,mid=(f+l)/2;
    while(f<=l)
    {
        if(data==a[mid]){
            found=1;
            break;
        }
        else if(data<a[mid]){
            l=mid-1;
        }
        else{
            f=mid+1;
        }
        mid=(f+l)/2;
    }
    if(found!=0){
        printf("Found at %d",mid);
    }
    else{
        printf("Not found");
    }
}