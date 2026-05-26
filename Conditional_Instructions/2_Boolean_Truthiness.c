
// Chapter 3 (Conditional Instructions) - Task 2: Boolean Evaluation of Truthiness
#include <stdio.h>
int main(){
    if (1){
        printf("1 is executed\n");
    }
    if (2.75){
        printf("2.75 is executed\n");
    }
    if ('t'){
        printf("t is executed\n");
    }
    if ("rifat"){
        printf("rifat is executed\n");
    } 
    if (0){ 
        printf("0 is executed\n");
    }
    return 0;
}
