
// Chapter 7 (Array) - Task 6
#include <stdio.h>
int main(){
    int marks[] = {45, 78, 95, 34};
    int *ptr = &marks[0];

    for (int i = 0; i<4; i++){
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}
