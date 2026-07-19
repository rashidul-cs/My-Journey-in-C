
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    bool flag = true;
    for (int i = 2; i<=n/2; i++){
        if (n%i == 0){
            flag = false;
            break;
        }
    }
    if (n == 1){
        printf("Neither Prime nor Composite");
    } else if (flag == true){
        printf("Prime");
    } else {
        printf("Composite");
    }
    return 0;
}
