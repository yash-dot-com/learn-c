// sometimes we may want to use structs recursively.
// to do so without compiler yelling that node_t doesn't exists, we forward declare it.

typedef struct Node node_t;

typedef struct Node{
    int value;
    node_t* next;
} node_t;

// cross usage of 