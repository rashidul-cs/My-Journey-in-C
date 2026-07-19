
#include <stdio.h>
int main(){
    int num[14];
    int n = 5;
    for (int i = 1; i<=10; i++){
        num[i] = (n*i);
    }
    for (int i = 1; i<=10; i++){
        printf("%d x %d = %d\n", n, i,  num[i]);
    }
    return 0;
}
