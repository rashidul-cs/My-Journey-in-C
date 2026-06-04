
// Chapter 9: Structures - Task 1.1
#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1, e2;
    e1.code = 4511;
    strcpy(e1.name, "Harry");
    e1.salary = 54.11;
    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    return 0;
}
