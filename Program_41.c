#include <stdio.h>

int BubbleSort(){
    int size, arr[20], i, j, temp;
    printf("Enter the size of an array : ");
    scanf("%d", &size);
    for(i = 0; i < size; i++){
        printf("Enter an element : ");
        scanf("%d", &arr[i]);
    }
    printf("Array before sorting is : ");
    for(i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\nArray after sorting is : ");
    for(i = 0; i < size - 1; i++){
        for(j = 0; j < size - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}

int main(){
    BubbleSort();
    return 0;
}