#include <stdio.h>

int main(){
    int size, arr[20], i, Min;
    printf("Enter size of an array : ");
    scanf("%d", &size);
    for(i = 0; i < size; i++){
        printf("Enter an element : ");
        scanf("%d", &arr[i]);
    }
    Min = arr[0];
    for(i = 0; i < size; i++){
        if(arr[i] < Min){
            Min = arr[i];
        }
    }
    printf("Minimum value in an array is : %d", Min);
    return 0;
}