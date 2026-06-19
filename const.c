// immutable variable is declared with const 
#include <stdio.h>

int main(){
    const int age = 24;
    // age = 21; not allowed 
    // char age = 'a' not allowed to redeclare the same variable 
    printf("%d\n",age);
}

// const doesn't really press immutability like it does to other data types.
// need to learn more about const & char* 