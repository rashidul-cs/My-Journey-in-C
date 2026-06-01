
// Chapter 6 (Pointers) - Task 8: Factorial Calculation using Pointer and Recursion
#include <stdio.h>
int factroial(int *n){
    if (*n < 2){
        return 1;
    }
    int x = *n-1;
    return *n * factroial(&x);
}

int main(){
    int n;
    printf("Enter number for factorial: ");
    scanf("%d", &n);
    printf("Factorial: %d\n", factroial(&n));
    return 0;
}
