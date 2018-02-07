//Fig 5.2-- Calling fork() And wait()(p2.c)
//author -- Aviral Verma(www.github.com/aviral1701)
#include <stdio.h>
#include <stdlib.h>
#include  <unistd.h>

int main(int argc,char *argv[]){
	printf("hello world (pid:%d)\n" , (int) getpid());
	int rc = fork();
	if(rc<0){
		printf(stderr,"fork failed\n");
		exit(1);
	}
	else if (rc==0){
		printf("I am Child (pid:%d)\n",(int)getpid());
	}
	else{
		int wt = wait(NULL);
		printf("I am parent of %d,my id is %d\n",rc,(int)getpid());
		printf("%d\n",wt);
	}	
}
/*
hello world (pid:4020)
I am Child (pid:4021)
I am parent of 4021,my id is 4020
402*
/
