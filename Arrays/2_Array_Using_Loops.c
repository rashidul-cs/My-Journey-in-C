
// Chapter 7 (Arrays) - Task 2: Input and Output of Array Elements Using For Loop
#include <stdio.h>
int main(){
    int marks[5];
    printf("Enter marks of 5 students: ");
    
    for(int i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++){
        printf("The value of marks at index %d is %d\n", i, marks[i]);
    }
    return 0;
}
