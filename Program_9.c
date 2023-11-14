#include <stdio.h>

int main(){
    //create variables
    int size1, size2, arr1[20], arr2[20], arr3[20], i, j;
    //enter values for array 1
    printf("Enter the size of an array 1 : ");
    scanf("%d", &size1);
    for(i = 0; i < size1; i++){
        printf("Enter an element : ");
        scanf("%d", &arr1[i]);
        arr3[i] = arr1[i];
    }
    //enter values for array 2
    printf("Enter the size of an array 2 : ");
    scanf("%d", &size2);
    j = i;
    for(i = 0; i < size2; i++){
        printf("Enter an element : ");
        scanf("%d", &arr2[i]);
        arr3[j] = arr2[i];
        j++;
    }
    //print merged array
    printf("After merging array 1 and array 2 values are : ");
    for(i = 0; i < (size1 + size2); i++){
        printf("%d\t", arr3[i]);
    }
    return 0;
}