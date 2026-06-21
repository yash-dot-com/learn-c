#include <stdio.h>

typedef enum StatusCode {
    SUCCESS = 200,
    BAD_REQUEST = 400,
    UNAUTHORIZED = 401,
    FORBIDDEN = 403,
    NOT_FOUND = 404,
    INTERNAL_SERVER_ERROR = 500
} success_code_t;

char* code_to_string(success_code_t code) {
    switch(code) {
        case SUCCESS:
            return "Success";
        case BAD_REQUEST:
            return "Bad Request";
        case UNAUTHORIZED:
            return "Unauthorized";
        case FORBIDDEN:
            return "Forbidden";
        case NOT_FOUND:
            return "Not Found";
        case INTERNAL_SERVER_ERROR:
            return "Internal Server Error";
        default:
            return "Unknown HTTP Status Code";
    }
}

int main(){
    success_code_t code = BAD_REQUEST; // Example status code, you can change it to test different cases
    printf("%s\n", code_to_string(code));
    return 0;
}