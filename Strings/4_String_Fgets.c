
// Chapter 8: String - Task 4 using (fgets not used scanf in string)
#include <stdio.h>
int main(){
    char st[30];
    printf("Enter a string: ");
    fgets(st, sizeof(st), stdin);
    printf("%s", st);
    return 0;
}
