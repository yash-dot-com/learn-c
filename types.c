#include <stdio.h>

int main(){
    int x = 12;
    float y = 5.4;
    char z = 'a';
    char* str = "yash sonalekar"; // an array of characters, kinda like string
    printf("%d, %c, %f, %s",x,z,y,str);
    return 0;
}

// format specifiers 
// %d for digit 
// %c for character
// %f for float 
// %s for string/ array of chars (char*)