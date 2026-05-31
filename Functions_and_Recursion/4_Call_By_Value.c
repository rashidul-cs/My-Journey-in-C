
// Chapter 5 (Functions & Recursion) - Task 4: Call by Value Demonstration
#include <stdio.h>

int change(int);

int main(){
    int b = 22;
    change(b); // Passes a copy, cannot change the original value of b
    printf("b is %d\n", b);
    return 0;
}

int change(int a){
    a = 77;
    return 0;
}
