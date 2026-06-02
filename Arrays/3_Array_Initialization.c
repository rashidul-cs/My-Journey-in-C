
// Chapter 7 (Arrays) - Task 3: Array Inline Initialization and Printing
#include <stdio.h>
int main(){
    int cgpa[3] = {45, 64, 73};
    for (int i = 0; i < 3; i++){
        printf("The value of array at index: %d is %d\n", i, cgpa[i]);
    }
    return 0;
}
