
// Chapter 3 (Conditional Instructions) - Task 1: Basic If-Else
#include <stdio.h>
int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18){
        printf("You are able to vote\n");
    } else {
        printf("Not eligible wait until age 18\n");
    }
    return 0;
}
