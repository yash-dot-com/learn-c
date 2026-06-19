#include <stdio.h>

int main(){
    // postfix increment = first lets the other things happen, then increment / dec
    int x = 1;
    // first print, then incremented 
    printf("%d\n",x++);
    // incremented value
    printf("%d\n",x);

    // prefix = first do the incr / decr operation then do whatever 
    printf("%d\n",--x);
    printf("%d\n",++x);
} 

// just write what you want to do in plain english 
// get the logic in english 
// then convert to code