// . dot operator has higher precendence than dereference, so *(file).type is the right way. 
// first derefer then use dot to read properties.

// all pointers are of same size

#include <stdint.h>
#include <stdio.h>

typedef struct
{
    char *name;
    char *type;
    int8_t size;
} codefile_t;

codefile_t change_filetype(codefile_t *f, char *new_type)
{
    // derefence it 
    codefile_t new_f = *f;
    // process it
    new_f.type = new_type;
    // return new
    return new_f;
}

int main()
{
    codefile_t doc = {
        .name = "birthcert",
        .type = "pdf",
        .size = 12};

    codefile_t new_type = change_filetype(&doc, "docx");
    printf("%s type", new_type.type);
}