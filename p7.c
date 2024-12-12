#include <stdio.h>
struct emp
{   
    int sal;
    char emailid[40];
    char address[100];
    char empname[30];
};
int main(){
    struct emp e[10];
    for(int i=0;i<10;i++){
        printf("enter salary no for emp no %d:",i);
        scanf("%d",&e[i].sal);
        printf("Enter empname:");
        scanf("%s",e[i].empname);
        printf("enter Address:");
        scanf("%s",e[i].address);
        printf("Enter email:");
        scanf("%s",e[i].emailid);

    }
    int count=0;
    for(int i=0;i<10;i++){
        if(e[i].sal>50000){
            count++;
        }
    }
    printf("No of employees having more than 50000 as salary are %d",count);
    return 0;

}