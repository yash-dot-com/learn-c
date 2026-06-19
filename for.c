#include <stdio.h>

void print_numbers(int start, int end){
    for(int i=start; i<=end; i++){
        printf("%d\n",i);
    }
}

void print_while(int end){
    int i = 1;
    while(i <= end){
        printf("%d\n",i);
        i++;
    }
}

// void do_while(){
//     do{
//         // work
//     }while(condition)
// }

int main(){
    print_numbers(10,20);
    print_while(10);
    return 0;
}