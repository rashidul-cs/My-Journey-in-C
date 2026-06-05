
// Chapter 10: Dynamic Memory Allocation - Task 4 (Resizing memory using realloc safely)
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL){
        printf("Memory Allocation failed!\n");
        return 1;
    }

    ptr[0] = 45;
    ptr[1] = 34;
    printf("ptr[0]: %d\n", ptr[0]);
    printf("ptr[1]: %d\n", ptr[1]);

    // Using a temporary pointer to prevent memory leaks if realloc fails
    int *temp = (int*) realloc (ptr, 10 * sizeof(int));

    if (temp == NULL){
        printf("Reallocation failed!\n");
        free(ptr);
        return 1;
    }

    ptr = temp; // Assigning the newly resized memory back to ptr
    free(ptr);  // Freeing the allocated memory
    return 0;
}
