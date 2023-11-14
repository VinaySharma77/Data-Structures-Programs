#include <stdio.h>

int main(){
    int arr1[4][4], arr2[4][4], i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Enter the value for matrix : ");
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\nValues of original matrix are : \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            arr2[i][j] = arr1[i][j];
        }
    }
    printf("\nValues of copied matrix are : \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}