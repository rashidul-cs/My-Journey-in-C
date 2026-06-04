
// Chapter 8: String - Task 6 strcpy(data copy)
#include <stdio.h>
#include <string.h>
int main(){
    char st[] = "harry";
    char target[30];
    strcpy(target, st);
    printf("%s %s\n", st, target);
    return 0;
}
