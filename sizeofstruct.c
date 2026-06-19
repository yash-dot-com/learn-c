// using sizeof() operator to find out the size of a struct 

#include<stdio.h>

typedef struct Person{
    char* firstname;
    char* lastname;
    int age;
} person_t;

int main(){
    person_t yash = {0};
    printf("size of person_t: %zu bytes\n",sizeof(yash));
}

// NOTE
// the size of struct != size of individual fields because to maintain memory alignment & faster access, compiler adds padding to make memory multiples of 4 for 32bits cpu arch
// not necessarily always 4.
// the memory is padding so that it complies to the largest datatype in the struct.
// for example,

struct Person {
    char a; // 1 byte
    double b; // 8 bytes
};

// the cpu will try to maintain addresses pointer aligned at multiples of 8. 
// so [a _ _ _ _ _ _ _][b] - 7 bytes padding added after a. 

// we can turn off padding while sending data over network in packets. 

