#include <stdio.h>

int main(){
    int arr[2][3], transpose[2][3], i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("Enter the values for matrix : ");
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Values of original array are : \n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            transpose[j][i] = arr[i][j];
        }
    }
    printf("Values of transpose matrix are : \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}