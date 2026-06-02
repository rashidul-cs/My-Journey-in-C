
// Chapter 7 (Array) - Task 4.3 Pointer arithmetics (Char pointer)
#include <stdio.h>
int main(){
    char a = 'B';
    char *ptr = &a;
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptr);
    printf("The value of a is %c\n", *(&a));
    printf("The value of a is %c\n", *ptr);
    printf("The value of a is %c\n", a);
    printf("The Ascci value of a is %d\n", *ptr);
    ptr++;
    printf("The address of a is %p\n", ptr);
    return 0;
}
