#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
void main(){
int arr[10]={234,1,34,54,2,5,62,4,8,10};
pid_t pid=fork();
if(pid==0){	
sleep(5);
printf("I am child working on %d \n",getpid());
printf(" and of parent %d \n",getppid());
	for(int i=0;i<9;i++){
		for(int j=0;j<10;j++){
			if(arr[j]>arr[j+1]){
				int cx=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=cx;
			}
		}
	}
}else{
	int status;
	wait(&status);
	printf("I am parent working on %d \n",getpid());
	for(int y=0;y<10;y++){
			printf("ele:%d,\n",arr[y]);	
		}
	}
}
