
// Chapter 10: Dynamic Memory Allocation - Task 1.2 (Malloc with loops and NULL check by me)
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    printf("Enter n: ");
    scanf("%d", &n);

    ptr = (int*) malloc (n * sizeof(int));

    // Checking if memory allocation was successful
    if (ptr == NULL){
        printf("Memory Allocation Failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++){
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++){
        printf("%d\n", ptr[i]);
    }
    
    free(ptr); // Freeing the allocated memory
    return 0;
}
