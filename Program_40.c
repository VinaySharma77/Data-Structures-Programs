#include <stdio.h>

int SelectionSort(){
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
    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
}

int main(){
    SelectionSort();
    return 0;
}