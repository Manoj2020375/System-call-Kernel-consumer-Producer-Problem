#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include<unistd.h>
#define SIZE 8

char array[9];
int main(int argc, char argv)
{
    syscall(336,array);
    array[8] = '\0';
    printf("String received: %s\n", array);

    return 0;
}
