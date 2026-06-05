
// Chapter 10: Dynamic Memory Allocation - Task 1.1 (Basic malloc implementation)
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    
    scanf("%d", &n);
    ptr = (int*) malloc (n * sizeof(int));
    
    ptr[0] = 3;
    ptr[1] = 6;
    
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    
    free(ptr); // Freeing the allocated memory
    return 0;
}
