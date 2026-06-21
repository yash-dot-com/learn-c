#include <string.h>

// strcpy(a,b) 
// strlen(a)
// strcat(a,b)
// strcmp(a,b) - compare lexicographically 
// strncpy(a,b,n) - copy n characters from second string 
// strncat(a,b,5) - n characters concatenated - copy 5 chars from b to a 
// strchr(str, 'c') - returns pointer to the first occurence of c character.
// strstr(str, "str") - returns pointer to the first occurrence of substring

// implement smart append 
// 1. check for available space 
// 2. append only till space lasts
// 3. ensure that buffer remains null-terminated 
// 4. return status msg to indicate whether full append was possible or not 

// return 1 for failure 
// 0 for success 

#include <stdio.h>
#include <string.h>

typedef struct {
    size_t length;
    char buffer[64];
} textBuffer;

int smart_append(textBuffer* dest, const char* src){
    if(dest == NULL || src == NULL){
        return 1;
    }

    int src_len = strlen(src);
    int remaining_size = sizeof(dest->buffer) - dest->length - 1; // reserving 1 byte for null terminator '\0'

    if(src_len > remaining_size){
        strncat(dest->buffer, src, remaining_size);
        dest->length = 63;
        dest->buffer[63] = '\0';
        return 1;
    }else{
        strcat(dest->buffer, src);
        dest->length += src_len;
        return 0;
    }
}

int main(){
    textBuffer tb = {
        .buffer = "sodhaodihaoidhoasihdoasidh",
        .length = 26,
    };

    char* src = "aodaodhaoidhaoihdoaishd";

    smart_append(&tb, src);

    printf("%s\n", tb.buffer);
    printf("%zu\n", tb.length);

    return 0;
}