
// Chapter 3 (Conditional Instructions) - Task 4: Ternary Operator
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter a, b: ");
    scanf("%d %d", &a, &b);
    (a>b)? printf("a is greater than b\n") : printf("b is greater than a\n");
    return 0;
}
