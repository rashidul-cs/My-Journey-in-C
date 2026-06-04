
// Chapter 8: String - Task 1.4 when string with (space) using fgets
#include <stdio.h>
int main(){
    char st[10];
    fgets(st, sizeof(st), stdin); // fgets is used instead of scanf("%[^\n]", st);
    printf("string is: %s\n", st);
    return 0;
}
