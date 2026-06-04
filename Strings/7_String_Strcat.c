
// Chapter 8: String - Task 7 strcat (concatnation or adding)
#include <stdio.h>
#include <string.h>
int main(){
    char s1[56] = "Harry";
    char s2[56] = " The King";
    strcat(s1, s2);
    printf("%s %s", s1, s2);
    return 0;
}
