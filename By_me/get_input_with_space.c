
#include <stdio.h>
int main(){
    int a;
    float b;
    char c, d[20];
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf(" %c", &c);

    getchar();

    printf("Enter d: ");
    // scanf("%s", d);
    fgets(d, sizeof(d), stdin);

    printf("a: %d\n", a);
    printf("b: %f\n", b);
    printf("c: %c\n", c);
    printf("d: %s\n", d);
    return 0;
}
