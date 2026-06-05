
// Chapter 10: Dynamic Memory Allocation - Task 2 (Allocating memory for float values)
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    float *ptr;
    
    ptr = (float*) malloc (n * sizeof(float));

    ptr[0] = 22.3;
    ptr[1] = 44.6;
    ptr[2] = 55.3;
    ptr[3] = 33.5;
    ptr[4] = 34.7;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    
    free(ptr); // Freeing the allocated memory
    return 0;
}
