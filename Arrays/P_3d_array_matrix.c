

#include <stdio.h>
int main(){
    int matrix[3][3][3];

    printf("Enter 27 Elements for Square Matrix[3][3][3]: \n");

    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            for (int k = 0; k<3; k++){
                printf("Elements[%d][%d][%d]: ", i, j, k);
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }

    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            for (int k = 0; k<3; k++){
                printf("%d\t", matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
