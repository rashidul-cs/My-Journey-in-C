
// Chapter 1 (Variables) - Task 1.2: Variable Sizes
#include <stdio.h>
int main(){
    int a = 67;
    float b = 69.45;
    char c = 'e';
    printf("The size of a is %zu bytes\n", sizeof(a));
    printf("The size of b is %zu bytes\n", sizeof(b));
    printf("The size of c is %zu byte\n", sizeof(c));
    return 0;
}
