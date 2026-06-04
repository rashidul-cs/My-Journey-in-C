
// Chapter 9: Structures - Task 5 (using typedef with structure)
#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];
} Emp;

int main(){
    Emp e1;
    e1.code = 45;
    e1.salary = 3454.34;
    strcpy(e1.name, "fahad");

    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);
    return 0;
}
