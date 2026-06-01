
// Chapter 6 (Pointers) - Task 2: Pointers with Char and Float Data Types
#include <stdio.h>
int main(){
    char i = 'A';
    char *j = &i;
    
    float k = 5.232;
    float *k1 = &k;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of k is %p\n", &k);
    printf("The ASCCI value at j is %d\n", *j);
    printf("The value at j is %c\n", *(&i));
    printf("The value at k1 is %.3f\n", *(&k));
    return 0;
}
