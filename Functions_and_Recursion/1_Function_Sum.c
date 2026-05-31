
// Chapter 5 (Functions & Recursion) - Task 1: Basic Function with Arguments and Return Value
#include <stdio.h>

int sum(int, int); // Function prototype

int main(){
    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    int z = sum(x, y); // Function call
    printf("Sum: %d\n", z);
    return 0;
}

int sum(int x, int y){ // Function declaration/definition
    return x + y;
}
