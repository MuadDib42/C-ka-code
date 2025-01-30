#include <stdio.h>
#include <unistd.h>
int main()
{	pid_t pid=fork();
	printf("I am main proc");
	if(pid==0){
	execl("./newfile","newfile",NULL);
	}
	else{
	printf("I am parent proc");
	}
}
