// strings are just array of characters with special initialization syntax

#include <stdio.h>

// implementing strlen 
int str_len(char* str){
    int len = 0;
    int i = 0;
    while(str[i] != '\0'){
        i++;
        len++;
    }

    return len;
}

// implementing str_cat(char* one, char* two) returns concatenated string. 
char* str_cat(char* a, int sizea, char* b, int sizeb){
    int i = sizea;

    for(int j=0;j< sizeb; j++){
        a[i] = b[j];
        i++;
    }

    a[i] = '\0';
    return a;
}

int main(){
    // use this only when you need to pre-allocate memory to strings 
    char name[] = "yash";
    printf("%s \n",name);
    
    char* lastname = "sonalekar";
    printf("%s \n",lastname);

    printf("%d \n",str_len(lastname));
    // sizeof(name)/sizeof(char) note that this total allocated buffer. & may not be same as the length of the string. 
    // char name[50] = "yash" sizeof(name)/sizeof(char) = 50 not 4. 

    str_cat(name, 4, lastname, 9);

    printf("%s",name);
    // also note that string ends with null character that is '/0' and strlen traverse over all the character until it reaches null char.
    // for functions like strcat, the first string should have enough pre-allocated memory in order to not get any buffer overflows.
}