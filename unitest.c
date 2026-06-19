// .h files - header files can be used to define functions signature which needs to be implemented in other files.
#include "unitest.h"
#include <stdio.h>

float get_average(int x, int y, int z){
    return (float)((x+y+z)/3);
}

int main(){
    float x = get_average(1,2,3);
    printf("%f\n",x);
}