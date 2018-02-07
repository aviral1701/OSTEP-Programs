//Fig 5.2-- Calling fork() And wait()(p2.c)
//author -- Aviral Verma(www.github.com/aviral1701)

#include <stdio.h>
#include <stdlib.h>
#include  <unistd.h>
#include <string.h> 
#include <sys/wait.h>

int main(int argc,char *argv[]){
	printf("hello world (pid:%d)\n" , (int) getpid());
	int rc = fork();
	if(rc<0){
		printf(stderr,"fork failed\n");
		exit(1);
	}
	else if (rc==0){
		printf("I am Child (pid:%d)\n",(int)getpid());
		char* myargs[3];
		myargs[0] = strdup("home/d3xt3r/Desktop/OSTEP/Chapter \5/wc.py");
		myargs[1] = strdup("home/d3xt3r/Desktop/OSTEP/Chapter \5/test");
		myargs[2] = NULL;
		execvp(myargs[0],myargs);
		printf("this shouldn’t print out\n"); 
	}
	else{
		printf("I am parent of %d,my id is %d\n",rc,(int)getpid());
	}	
}