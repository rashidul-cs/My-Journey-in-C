
// Chapter 5 (Functions & Recursion) - Task 5: Using Math Library Function pow()
#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Enter side: ");
    scanf("%d", &a);

    // pow() returns a double, so using %.2f is required
    printf("The area of a square is %.2f \n", pow(a, 2));
    return 0;
}
