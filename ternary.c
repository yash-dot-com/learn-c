#include <stdio.h>
#include <stdbool.h>
// need to include header to use bools. wow. 
// atp lets use zig & contribute to open source.

bool isGreater(int x, int y){
    return (x > y ? true : false);
}

// also printing boolean gives 1 or 0 
// uses digit format specifier 

int main(){
    bool answer = isGreater(20, 17);
    if(answer == 1){
        printf("yes\n");
    }else{
        printf("no\n");
    }

    return 0;
}