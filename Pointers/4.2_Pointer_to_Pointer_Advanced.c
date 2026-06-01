
// Chapter 6 (Pointers) - Task 4.2: Double Pointer Value and Address Cross-Check
#include <stdio.h>
int main(){
    int i = 67;
    int *j = &i;
    int **k = &j;
    printf("i is %d\n", i);
    printf("i is %d\n", *j);
    printf("i is %d\n", *(&i));
    printf("i is %d\n", **k);
    printf("i is %d\n", **(&j));
    printf("Address of i is %p\n", &i);
    printf("Address of i is %p\n", j);
    printf("Address of i is %p\n", *(&j));
    printf("Address of j is %p\n", k);
    printf("Address of j is %p\n", &j);
    printf("Address of k is %p\n", &k);
    return 0;
}
