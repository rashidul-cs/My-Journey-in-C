
// Chapter 1: Variables - Task 3.2 (Handling mixed variable inputs and clearing memory buffer)
#include <stdio.h>
int main(){
    int a;
    float b;
    char c, d[20];

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    // Notice the space before %c, it consumes any leftover newline character in memory
    printf("Enter c: ");
    scanf(" %c", &c);

    printf("Enter d: ");
    getchar(); // Consumes the newline character left by scanf so fgets doesn't get skipped
    fgets(d, sizeof(d), stdin);

    printf("a is %d & b is %f\n", a, b);
    printf("c is %c & d is %s\n", c, d);

    return 0;
}
