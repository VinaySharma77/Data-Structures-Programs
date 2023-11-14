#include <stdio.h>

int main(){
    //create variables
    int size, arr[20], newarr[20], i;
    //take user input
    printf("Enter the size of an array : ");
    scanf("%d", &size);
    for(i = 0; i < size; i++){
        printf("Enter an element : ");
        scanf("%d", &arr[i]);
    }
    //print old array
    printf("Values of Old array is : \n");
    for(i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    //copy old array into new array
    printf("\nValues of Copied array is : \n");
    for(i = 0; i < size; i++){
        newarr[i] = arr[i];
    }
    //print new array
    for(i = 0; i < size; i++){
        printf("%d\t", newarr[i]);
    }
    return 0;
}