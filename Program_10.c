#include <stdio.h>

int main(){
    int size1, size2, arr1[20], arr2[20], i, j, count = 0;
    printf("Enter the size of an array 1 : ");
    scanf("%d", &size1);
    for(i = 0; i < size1; i++){
        printf("Enter an element : ");
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of an array 2 : ");
    scanf("%d", &size2);
    for(i = 0; i < size2; i++){
        printf("Enter an element : ");
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < size1; i++){
        if(arr1[i] == arr2[i]){
           count++;
        }
    }
    if(count == size1){
        printf("Both arrays are same");
    }
    else{
        printf("Both arrays are not same");
    }
    return 0;
}