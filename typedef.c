#include <stdio.h>

struct City{
    char* name;
    int lat;
    int lon;
};

// the type of above struct is not City, its "struct City"

// in order to give aliases to structs, we can use typedef.

typedef struct Person{
    char* firstname;
    char* lastname;
    int age;
} person_t;

// now person_t can be used as type.

void print_person(person_t person){
    printf("name: %s %s, age: %d \n", person.firstname, person.lastname, person.age);
}

int main(){
    person_t yash = {
        .firstname = "Yash",
        .lastname = "Sonalekar",
        .age = 21,
    };

    print_person(yash);
    return 0;
}