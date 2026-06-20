// the name of the array is just the pointer to the first element
// nums is just a pointer, a number, so we can do arithmatics with it.
// [nums nums+1 nums+2 nums+3 nums+4] 

// nums[0] is simply *nums 
// nums[1] is *(nums+1)
// nums[2] is *(nums+2)
// 1 = 1 byte shift from original location
// nums[i] = *(nums + i)



#include <stdio.h>
#include <stdint.h>

int main(){
    int arr[] = {1,2,3,4,5};
    printf("%d",arr[32124]);
    printf("%p \n", &arr);
    printf("%d \n", *arr);
}