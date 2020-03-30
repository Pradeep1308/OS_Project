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
