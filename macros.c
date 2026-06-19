// multiline macros can be wrapped inside the do while loop to make sure they behave as they are expected. 
#include<stdio.h>

#define SWAP_NUMBERS(a, b) do{ \
    printf("a = %d, b = %d \n",a,b); \
    int temp = a; \
    a = b; \
    b = temp; \
    printf("a = %d, b = %d\n",a,b);\
}while(0)

int main(){
    int x = 10;
    int y = 20;
    SWAP_NUMBERS(x,y);
    return 0;
}

/*
#define SWAP_NUMBERS(a,b) do{ printf("a = %d, b = %d",a,b); int temp = a; a = b; b = temp; printf("a = %d, b = %d",a,b); }while(0)

Expands to:

do{ printf("a = %d, b = %d",10,20); int temp = 10; 10 = 20; 20 = temp; printf("a = %d, b = %d",10,20); }while(0)

explanation : 
- When you pass literal values like 10 and 20 into your macro,
- the C preprocessor does a blind text search-and-replace.
- It takes the text 10 and puts it everywhere it sees a. 
- It takes the text 20 and puts it everywhere it sees b.

so that becomes 

10 = 20 
20 = 10 

which is illegal,
so macros only work with variables.
*/