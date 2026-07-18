
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z'){
        printf("%c is lowercase\n", ch);
    } else if (ch >= 'A' && ch <= 'Z'){
        printf("%c is uppercase\n", ch);
    } else {
        printf("%c is not a character!\n", ch);
    }
    return 0;
}
