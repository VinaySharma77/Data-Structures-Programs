#include <stdio.h>

int main(){
    int size, arr[20], revarr[20], i;
    printf("Enter the size of an array : ");
    scanf("%d", &size);
    for(i = 0; i < size; i++){
        printf("Enter an element : ");
        scanf("%d", &arr[i]);
    }
    printf("Values of original array are : \n");
    for(i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\nValues of copied array in reverse order are : \n");
    int track = size;
    for(i = 0; i < size; i++){
        track--;
        revarr[track] = arr[i];
    }
    for(i = 0; i < size; i++){
        printf("%d\t", revarr[i]);
    }
    return 0;
}