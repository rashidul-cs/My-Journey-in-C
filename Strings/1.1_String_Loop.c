
// Chapter 8: String - Task 1.1 (using for loop)
#include <stdio.h>
int main(){
    char st[] = {'a', 'b', 'c', '\0'};
    for(int i = 0; i<3; i++){
        printf("Character: %c\n", st[i]);
    }
    return 0;
}
