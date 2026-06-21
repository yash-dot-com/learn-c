// when we pass the array pointer to a function it decays / gets converted into a simple pointer pointing at first element 
// compiler don't print the size of whole array now .

#include <stdio.h>
#include <stdint.h>

void print_size(int8_t arr[]){
    printf("%zu\n", sizeof(arr));
}

int main(){
    int8_t arr[] = {1,2,3,4,5,6,7,8,9,10};

    printf("%zu \n",sizeof(arr));
    print_size(arr);
}