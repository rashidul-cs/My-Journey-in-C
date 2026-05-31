
// Chapter 4 (Loop Control Instructions) - Task 5: Print First N Natural Numbers using Do While
#include <stdio.h>
int main(){
    int n, i = 1;
    printf("Enter number for first n natural number: ");
    scanf("%d", &n);

    do {
        printf("%d\t", i);
        i++;
    } while (i <= n);
    return 0;
}
