#include <stdio.h>

int main(){
    int arr1[4][4], arr2[4][4], arr3[4][4], i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Enter the value for matrix 1 : ");
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Enter the value for matrix 2 : ");
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\nValues of matrix 1 are : \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nValues of matrix 2 are : \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\nAfter adding matrix 1 and 2 values are : \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}