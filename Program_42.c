#include <stdio.h>

int main(){
    int size, num, i, j, k, arr[20], temp;
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
            if(arr[i] >= arr[j]){
                temp = arr[j];
                k = j;
                while(k > i){
                    arr[k] = arr[k - 1];
                    k--;
                }
                arr[i] = temp;
            }
        }
    }
    for(i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}