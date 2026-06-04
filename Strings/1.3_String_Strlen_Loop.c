
// Chapter 8: String - Task 1.3 by me(using strlen)
#include <stdio.h>
#include <string.h>
int main(){
    char st[] = {"abc"};
    int length = strlen(st); // when i don't know the length

    for(int i = 0; i< length; i++){
        printf("Character: %c\n", st[i]);
    }
    return 0;
}
