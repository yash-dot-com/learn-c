// getting the address of a variable from memory.
// & = address-of operator 

// %p format specifier printing a pointer, pointer is nothing but a memory address.

// note that the program doesn't get access to physical memory location on the physical RAM. 
// the program in execution is termed as a process.

/*
When you write C code and compile it, you get an executable file sitting on your hard drive.
That file is passive. When you double-click that file or run it in your Mac Terminal, 
the operating system copies it into memory and starts running it. 
That active, running program is called a process
*/

// When your C program runs, it does not interact with the actual physical RAM chips directly.
// The operating system gives every single process its own massive, continuous block of fake memory addresses
// this makes sure that A process cannot see or touch the memory of any other process

// memory management unit is the component that maps the virtual memory addresses assigned by the OS to the real physical memory addresses in the RAM 

#include <stdio.h>

int main(){
    int age = 21;
    // printing the address/ location of name variable 

    printf("address of name variable : %p\n",&age);

    // sizeof pointer = 8 bytes 
    printf("size of address pointer : %zu\n", sizeof(&age));
}