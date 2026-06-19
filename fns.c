#include <stdio.h>

float max_memory(int max_threads, int memory_per_thread){
    return (float)(max_threads* memory_per_thread);
}

int main(){
    printf("max memory : %f\n",max_memory(3,4));
}