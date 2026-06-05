
// Chapter 10: Dynamic Memory Allocation - Task 3.2 (Calloc with loops and user input)
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    printf("Enter n: ");
    scanf("%d", &n);

    ptr = (int*) calloc (n, sizeof(int));

    if (ptr == NULL){
        printf("Memory Allocation failed!\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++){
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++){
        printf("Your input: %d\n", ptr[i]);
    }

    free(ptr); // Freeing the allocated memory
    return 0;
}
