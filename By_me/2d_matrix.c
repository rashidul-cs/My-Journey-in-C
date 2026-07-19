
#include <stdio.h>
int main(){
    //array starts from 0
    int matrix[3][3];
    printf("Enter numbers for 3x3 matrix: \n");
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            printf("Matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The Matrix: \n");
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
