// what are pointers? basically just a variable storing a number (that corresponds to a memory address)

#include <stdio.h>
#include <stdint.h>

int main(){
    int16_t x = 123;
    // pointer is called name, type of char* 
    char* name = "yash";

    // pointer is called px, type is int16_t*  
    int16_t* px = &x;

    printf("%d at %p\n",x, px);
    printf("%s at %p\n",name, &name);

    // char* datatype for pointer
    // *pointer value-at pointer
    // &variable address-of variable 

    name = (char*)"anushka";
    printf("%s %p",name, &name);
}

// why pointers are required ? 
// 1. non linear data structures. by default memory is not contigous, so in order to work with non linear DS, you need to store the address of next or previous node. 
// 2. when call functions by passing variables, the functions creates a local copy of that variable, local scope to work on it / process it. 
// but when we are dealing with large data objects, the memory access (copy and pasting) can be a bottleneck
// the primary bottleneck of every program is waiting for data (travelling from memory)
// 3. so we pass pointers in the function so that the function can directly work with the data stored in the memory, no need to copy data into local variables, process it and store again. 
// 4. access and operate on values directly at the memory they are stored at.
// Moving large objects from the main memory (RAM) into the CPU registers takes time
// Making a local copy doubles that travel time and wastes space
// by passing the pointer - as a reference map to the - function changes the data right where it lives, making your program much faster and more efficient


// int* px = px is pointer, datatype int* 
// *px = value at px
// &px = address of px (pointer is a variable that stores address of another variable)
// *px = 123  // changing the value that px is pointing to
