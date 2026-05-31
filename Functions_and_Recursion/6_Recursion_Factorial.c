
// Chapter 5 (Functions & Recursion) - Task 6: Factorial Calculation using Recursion
#include <stdio.h>

int factorial(int);

int main(){
    int n;
    printf("Enter number for factorial: ");
    scanf("%d", &n);
    int f = factorial(n);
    printf("The Factorial of %d is: %d\n", n, f);
    return 0;
}

int factorial(int n){
    if (n < 2){ // Base case
        return 1;
    }
    // Recursive case: factorial(n) = n * factorial(n-1)
    return factorial(n-1) * n;
}
