#include <stdio.h>

// void type is used to denote that a fn takes no arg
int get_integer(void){
    return 4;
}

// when a fn doesn't return anything 
void print_integer(int x){
    printf("%d\n",x);
}

int main(){
    // void x = None / null not allowed to declare anything with void type.
    const int a = get_integer();
    printf("%d\n",a);

    print_integer(5);
}