
// Chapter 3 (Conditional Instructions) - Task 5: Switch Statement
#include <stdio.h>
int main(){
    int a, b, choice;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice){
        case 1:
            printf("a+b is %d\n", a+b);
            break;
        case 2:
            printf("a-b is %d\n", a-b);
            break;
        case 3:
            printf("axb is %d\n", a*b);
            break;
        default:
            printf("Not matched\n");
            break;
    }
    return 0;
}
