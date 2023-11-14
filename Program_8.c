#include <stdio.h>

int BinarySearch(){
    int size, arr[20], search, upper, lower = 0, mid, i, j, temp, count = 0;
    printf("Enter the size of an array : ");
    scanf("%d", &size);
    for(i = 0; i < size; i++){
        printf("Enter an element : ");
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Enter a number to search in an array : ");
    scanf("%d", &search);
    upper = size - 1;
    while(lower <= upper){
        mid = lower + (upper - lower) / 2;
        count++;
        for(i = 0; i < size; i++){
            if(search == arr[mid]){
                printf("No. of iterations : %d\n", count);
                return 0;
            }
            else if(search > arr[mid]){
                lower = mid + 1;
            }
            else if(search < arr[mid]){
                upper = mid - 1;
            }
            else{
                return -1;
            }
        }
    }
}
int main(){
    int result = BinarySearch();
    if(result == 0){
        printf("Number found");
    }    
    else{
        printf("Number not found !");
    }
    return 0;
}