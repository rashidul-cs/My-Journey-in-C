
// Chapter 10: Dynamic Memory Allocation - Task 3.1 (Basic calloc implementation)
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d", &n);

    // calloc initializes all blocks with 0 automatically
    ptr = (int*) calloc (n, sizeof(int));

    ptr[0] = 56;
    ptr[1] = 67;
    
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    
    free(ptr); // Freeing the allocated memory
    return 0;
}
