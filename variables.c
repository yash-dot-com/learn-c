// by default variables are mutable 
// re-declaring single variable in same scope is not allowed 
// mutable = values can change but type of value mustnt change 

#include <stdio.h>

int main(){
    char* name = "yash";
    printf("name is %s\n",name);
    name = "sonalekar";
    printf("name is %s\n",name);
} 