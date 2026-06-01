
// Chapter 6 (Pointers) - Task 5: Function Call by Value
#include <stdio.h>
int sum(int, int);
int sum(int a, int b){
    return a+b;
}

int main(){
    printf("The sum of 1 and 6 is %d\n", sum(1, 6));//call by value
    return 0;
}
