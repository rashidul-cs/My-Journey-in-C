
// Chapter 5 (Functions & Recursion) - Task 2: Direct Function Calls from Main
#include <stdio.h>

void good_morning();
void good_afternoon();
void good_night();

int main(){
    good_morning();
    good_afternoon();
    good_night();
    return 0;
}

void good_morning(){
    printf("good morning\n");
}
void good_afternoon(){
    printf("good afternoon\n");
}
void good_night(){
    printf("good night\n");
}
