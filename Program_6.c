#include <stdio.h>

void LinearSearch(){
    int size, arr[10], searchNum, i;
    printf("Enter the size of an array : ");
    scanf("%d", &size);
    for(i=0; i<size; i++){
        printf("Enter an element : ");
        scanf("%d", &arr[i]);
    }
    printf("Enter a number to search in an array : ");
    scanf("%d", &searchNum);

    for(i = 0; i < size; i++){
        if(arr[i] == searchNum){
            printf("Number is found at position : %d", i + 1);
            break;
        }
    }
    if(i == size){
        printf("Number not found !!");
    }
}

int main(){
    LinearSearch();
    return 0;
}