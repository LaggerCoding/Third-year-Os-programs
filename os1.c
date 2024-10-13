#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
    int y,z;
    printf("Hello\n");
    if(fork()==0)
    {
        printf("\nIm Child process");
        y=getpid();
        z=getppid();
        printf("\nChild process id:%d",y);
        printf("\nParent process id printed by child process:%d",z);
        exit(0);
    }else
    {
        wait(NULL);
        printf("\nIam Parent process");
        z=getpid();
        printf("\nParent Process id:%d\n",z);
    }
    return 0;
}