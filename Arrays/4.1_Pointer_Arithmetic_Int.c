
// Chapter 7 (Array) - Task 4.1 Pointer arithmetics 
#include <stdio.h>
int main(){
    int a = 45;
    int *ptr = &a;
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptr);
    ptr++;
    printf("The value of ptr is %p\n", ptr);
    ptr--;
    printf("The value of ptr is %p\n", ptr);
    return 0;
}
