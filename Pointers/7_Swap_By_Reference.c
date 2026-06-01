
// Chapter 6 (Pointers) - Task 7: Swapping Two Numbers using Pointers
#include <stdio.h>
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 67, b = 3;
    swap(&a, &b);
    printf("a is %d and b is %d\n", a, b);
    return 0;
}
