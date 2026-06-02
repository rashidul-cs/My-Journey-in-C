
// Chapter 7 (Array) - Task 4.2 by me the same(pointer arithmetic)
#include <stdio.h>
int main(){
    int a = 64;
    int *ptr = &a;
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptr);
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *ptr);
    printf("The value of a is %d\n", *(&a));
    ptr++;
    printf("The address of a is %p\n", ptr);
    return 0;
}
