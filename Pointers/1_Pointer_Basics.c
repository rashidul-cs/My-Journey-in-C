
// Chapter 6 (Pointers) - Task 1: Basic Pointer and Addresses
#include <stdio.h>
int main(){
    int i = 545;
    int *j = &i;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The value at j is %d\n", *j);
    printf("The value of j is %d\n", *(&i));
    return 0;
}
