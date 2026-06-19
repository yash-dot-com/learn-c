// packed structs to stop memory alignment to stop extra padding bytes to be added to the total size of struct
// efficient while transferring struct over network

// general rule of thumb to reduce padding - order of the datatypes in struct should be from largest to smallest.

#include <stdio.h>
#include <stdbool.h>

#pragma pack(push, 1) // 1 byte based alignment, basically no padding.
typedef struct Person{
    char* firstname;
    char* lastname;
    int age;
    bool isStudent;
} person_t;
#pragma pack(pop)

int main(){
    person_t yash = {0};
    printf("size of struct %zu", sizeof(yash));
    return 0;
}

// when 1 byte alignment: 21 bytes
// without alignment: 24 bytes