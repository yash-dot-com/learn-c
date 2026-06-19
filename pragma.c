// when we #include something, C's default strategy is to copy everything line to line 
// to avoid injecting same header more than once, (more than once will result in redeclaration of variables and fns and so on.) error 
// we put #pragma once special instruction in the header file. 
// this makes sure that the header file is preprocessed only once
// same header file may be included in multiple files leading the duplication and redeclaration. 

// put #pragma once in the header files .h files
// quicker and less error prone. 

#pragma once 

