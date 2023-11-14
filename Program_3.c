#include <stdio.h>

int main(){
    int size, arr[20], i;
    printf("Enter the size of an array : ");
    scanf("%d", &size);
    for(i = 0; i < size; i++){
        printf("Enter an element : ");
        scanf("%d", &arr[i]);
    }
    printf("Index\t\tValue\n");
    for(i = 0; i < size; i++){
        printf("%d \t\t%d\n", i, arr[i]);
    }
    return 0;
}