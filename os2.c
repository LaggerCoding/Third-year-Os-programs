#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main()
{
    int y,z;
    printf("hello!\n");
    if(fork()==0)
    {
        printf("\n iam child process\n");
        y=getpid();
        z=getppid();
        printf("\nchild process id:%d\n",y);
        printf("\nParent process id by child process:%d",z);
        sleep(5);
        printf("\nParent terminated, i became batman(orphan xD)");
    }else
    {
        printf("\niam parent process\n");
        z=getpid();
        printf("\nParent process id:%d\n",z);
    }
}
