
// Chapter 8: String - Task 3.2 using fgets instead of scanset
#include <stdio.h>
int main(){
    char st[4];
    fgets(st, sizeof(st), stdin); // fgets is used instead of scanf("%[^\n]", st);
    printf("%s\n", st);
    return 0;
}
