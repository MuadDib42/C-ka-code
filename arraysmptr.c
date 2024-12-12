#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        printf("Enter element:");
        scanf("%d",&a[i]);
    }
    int *pr = a;
    for(int j=0;j<n;j++){
        sum+=(*pr);
        pr++;
        
    }
    printf("Sum=%d",sum);
    return 0;

}