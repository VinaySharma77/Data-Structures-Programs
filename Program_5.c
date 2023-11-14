#include <stdio.h>

int main(){
    //create variables
    int size, arr[20], newarr[20], i, j, temp;
    //take user input
    printf("Enter the size of an array : ");
    scanf("%d", &size);
    for(i = 0; i < size; i++){
        printf("Enter an element : ");
        scanf("%d", &arr[i]);
    }
    //print original array
    printf("Values of original array is : ");
    for(i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    //copy original array to new array
    for(i = 0; i < size; i++){
        newarr[i] = arr[i];
    }
    //sort new array
    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(newarr[i] > newarr[j]){
                temp = newarr[i];
                newarr[i] = newarr[j];
                newarr[j] = temp;
            }
        }
    }
    //print new array
    printf("\nValues of new array is : ");
    for(i = 0; i < size; i++){
        printf("%d\t", newarr[i]);
    }
    return 0;
}