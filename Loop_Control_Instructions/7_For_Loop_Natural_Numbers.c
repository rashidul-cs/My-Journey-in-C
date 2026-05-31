
// Chapter 4 (Loop Control Instructions) - Task 7: Print First N Natural Numbers using For Loop
#include <stdio.h>
int main(){
    int n;
    printf("Enter number for first n natural number: ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++){
        printf("%d\t", i);
}
    return 0;
}
