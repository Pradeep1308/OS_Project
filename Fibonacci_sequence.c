#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/shm.h>
#include <sys/stat.h>


#define MAX_SEQUENCE 10


typedef struct {
long fib_sequence[MAX_SEQUENCE];
int sequence_size;
} shared_data;
int main( int argc,char *argv[] ){
int a=0,b=1,n=a+b,i,ii;
int pid;
int segment_id;
shared_data *shared_memory;
const int size = sizeof(shared_data);

segment_id = shmget ( IPC_PRIVATE, size, S_IRUSR | S_IWUSR);
shared_memory = (shared_data*) shmat (segment_id, NULL, 0);


printf("Please enter a number:\n");
scanf(" %d", &ii);
