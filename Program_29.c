#include <stdio.h>

int main(){
    char arr[50];
    int i, j, temp;
    printf("Enter a string : ");
    gets(arr);
    for(i = 0; arr[i] != '\0'; i++){
        for(j = i + 1; arr[j] != '\0'; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%s", arr);
    return 0;
}