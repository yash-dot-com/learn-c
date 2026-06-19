// structs in c are like objects / classes in other languages.
// there is no inheritence, class methods, static variables etc.

// just group multiple data points / variables together. 
// no behavious linked to them. only data 

// properties inside the struct can be accessed using struct.property or if you have pointer to the struct 
// then struct->property 

// the order of data variables inside the struct matters. 

#include <stdbool.h>
#include <stdio.h>

struct person{
    char* name;
    int age;
    bool hasLicense;
};

// is different than 

// struct person{
//     char* name;
//     bool hasLicense;
//     int age;
// };

// both are represented differently in the memory and are treated differently. 
// in memory these fields are grouped together. 

// struct helps us to return multiple values from a function 
// by default c allows only 1 return value

// function returning struct to return multiple values 

struct City{
    char* name;
    int lat;
    int lon;
};

struct City create_city(char* name, int lat, int lon){
    struct City c = {
        .name = name,
        .lat = lat,
        .lon = lon,
    };

    return c;
}

int main(){
    // zero initialization - all values set to 0 default values of that type
    struct City c = {0};

    // designated initialization - best way 
    struct City c2 = {
        .name = "Pune",
        .lat = 10,
        .lon = 20,
    };

    // positonal initializer 
    struct City c3 = {"Pune",10,20};

    printf("%s %d %d\n", c.name, c.lat, c.lon);
    printf("%s %d %d\n", c2.name, c2.lat, c2.lon);
    printf("%s %d %d\n", c3.name, c3.lat, c3.lon);

    struct City c4 = create_city("Mumbai",10,20);

    // You cannot print a whole structure directly in C. 
    // You must print its individual fields (like its name or population) one by one.
    printf("%s %d %d\n",c4.name, c4.lat, c4.lon);
}
