
// Chapter 4 (Loop Control Instructions) - Task 9: Break and Continue Control Statements
#include <stdio.h>
int main(){
    for (int i = 0; i<22; i++){
        if (i == 5){
            continue;
        }
        if (i == 15){
            break;
        }
        printf("%d\t", i);
    }
    return 0;
}
