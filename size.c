// knowing about the size that a type takes helps you understand memory management better

// char 1 byte 8bits
// float 4 bytes
// double 8 bytes 
// int depends on the cpu 

// sizeof() is not a function, its an operator and returns a type size_t
// size_t is the datatype that can represent the size of largest possible object in target platform's address space 
// size_t can fit any single non struct value inside it. 

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

// sizeof returns size in bytes. 

int main(){
    int age = 21;
    printf("sizeof integer is %zu \n", sizeof(age));
    printf("sizeof boolean is %zu \n", sizeof(bool));
    printf("sizeof character is %zu \n", sizeof(char));
    printf("sizeof size_t is %zu \n", sizeof(size_t));
}