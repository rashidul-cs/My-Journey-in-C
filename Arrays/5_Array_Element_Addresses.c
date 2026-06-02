
// Chapter 7 (Array) - Task 5 
#include <stdio.h>
int main(){
    int marks[5];
    printf("Enter marks of 5 students: ");

    for (int i = 0; i<5; i++){
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i<5; i++){
        printf("The address of marks at index %d is %p\n", i, &marks[i]);
    }
    return 0;
}
