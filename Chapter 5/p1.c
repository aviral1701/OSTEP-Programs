//Fig-5.1 -- Calling fork() (p1.c) 
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
		printf("parent id-- %d,child id -- %d\n",(int)getpid(),rc);
	}	
}

/* Output-
hello world (pid:3890)
parent id-- 3890,child id -- 3891
I am Child (pid:3891)
*/