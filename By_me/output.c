
//What is the output of this program (7 13)
#include <stdio.h>
int main(){
    int x,y;
    x = 7;
    y = --x + x++;
    printf("%d %d", x, y);
    return 0;
}
