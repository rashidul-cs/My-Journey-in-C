
// Chapter 6 (Pointers) - Task 6: Call by Reference Mechanics
#include <stdio.h>
//sum should change the value of x
int sum(int *a, int *b){
    *a = 6;
    return (*a + *b);
}

int change(int *a){
    return *a = 6;
}

int main(){
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);
    
    int a = 23, b = 21;
    printf("The value of a and b is %d, %d\n", change(&a), b);
    return 0;
}
