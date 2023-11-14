#include <stdio.h>

int main(){
    //declare variables
    int size, arr[20], i, Max;
    //print a message for user
    printf("Enter size of an array : ");
    //take user input
    scanf("%d", &size);
    //print an array
    for(i = 0; i < size; i++){
        printf("Enter an element : ");
        scanf("%d", &arr[i]);
    }
    //find maximum value in an array
    Max = arr[0];
    for(i = 0; i < size; i++){
        if(arr[i] > Max){
            Max = arr[i];
        }
    }
    //print maximum value
    printf("Maximum value in an array is : %d", Max);
    return 0;
}