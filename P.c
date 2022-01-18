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
    int x;
    int file;
    array[8] = '\0';
    file = open("/dev/urandom", O_RDONLY);
    x = read(file,array,8);
    syscall(335,array);
    printf("String sent: %s\n", x);
    close(file);
    return 0;

    
}

