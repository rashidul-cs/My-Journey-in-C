
// Chapter 9: Structures - Task 3 (using arrow operator with structure pointer)
#include <stdio.h>

struct employee {
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;
    e1.code = 23;
    struct employee *ptr;
    ptr = &e1;
    
    // ptr->code is the professional way of writing (*ptr).code
    printf("Code using arrow operator: %d\n", ptr->code);

    return 0;
}
