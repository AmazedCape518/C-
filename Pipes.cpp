#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
#include<unistd.h>
using namespace std;

int main(){
int c1, c2;
int fildes1[2], fildes2[2];
FILE *fd;

if (c1 = pipe(fildes1)){ // Pipe to two child processes
	perror("Unable to create the first pipe.");
	exit(1);
}

if (c1 = pipe(fildes2)){ // Pipe for parent and child process
	perror("unable to create the second pipe.");
	exit(1);
}
c1 = fork();
if ((c1 = fork()) == -1){ //Create the first child process
	perror("Unable to fork first child");
	exit(1);
}
else if (c1 == 0){
	printf(" Child 2's pid is %d \n", getpid());
	for (int i = 0; i < 25; i++){
		
	}
}

printf("I am the parent, pid = %d \n", getpid());

c1 = fork();

if (c1==0){
printf("I am a child pid = %d c1 = %d \n", getpid(), c1);

/* Child's task */
exit(1);
}
c2 = fork();
if (c1==0){
printf("I am a child pid = %d c2 = %d \n", getpid(), c2);

/* Child's task */
exit(1);
}
}
