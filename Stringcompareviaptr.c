#include <stdio.h>
int main(){
    char st1[10], st2[10];
    char *ptr=st1,*ptr2=st2;
    int flag=0;
    printf("Enter string 1:");
    scanf("%s",st1);
    printf("Enter string 2:");
    scanf("%s",st2);
    while(*ptr!="/o" || *ptr2!="/o"){
        if(*ptr!=*ptr2){
            flag=1;
            break;
        }
        ptr++;
        ptr2++;
    }
    if(flag!=0){
        printf("strings are not equal");
    }
    else{
        printf("Strings are equal");
    }
    return 0;
}
