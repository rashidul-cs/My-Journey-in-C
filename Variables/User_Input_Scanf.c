
// Chapter 1 (Variables) - Task 2.1: User Input with scanf
#include <stdio.h>
int main(){
    int a;
    float b;
    char c, d[10];

    printf("Enter a, b, c, d: \n");
    scanf("%d %f %c %s", &a, &b, &c, d);
    printf("a is %d\n", a);
    printf("b is %f\n", b);
    printf("c is %c\n", c);
    printf("d is %s\n", d);
    return 0;
}
