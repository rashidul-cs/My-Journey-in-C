
// Chapter 6 (Pointers) - Task 3: Address and Value Printing using Pointers
#include <stdio.h>
int main(){
    int i = 8;
    int *j;
    j = &i;
    printf("Address i = %p\n", &i);
    printf("Address i = %p\n", j);
    printf("Address j = %p\n", &j);
    printf("Value i = %d\n", *j);
    printf("Value i = %d\n", *(&i));
    printf("Value i = %d\n", i);
    return 0;
}
