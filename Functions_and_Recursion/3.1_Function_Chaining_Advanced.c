
// Chapter 5 (Functions & Recursion) - Task 3.1: Indirect Function Calls (Chaining)
#include <stdio.h>

void good_morning();
void good_afternoon();
void good_night();

int main(){
    good_morning();
    return 0;
}

void good_morning(){
    printf("good morning\n");
    good_afternoon();
}
void good_afternoon(){
    printf("good afternoon\n");
    good_night();
}
void good_night(){
    printf("good night\n");
}
