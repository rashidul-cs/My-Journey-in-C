
// Chapter 4 (Loop Control Instructions) - Task 2: While Loop with Filter Condition
#include <stdio.h>
int main(){
    int i = 0;
    while (i <= 20){
        if (i >= 10){
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
