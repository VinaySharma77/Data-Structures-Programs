#include <stdio.h>

int main(){
    char arr[50], copyrev[50];
    int i, length = 0;
    printf("Enter a string : ");
    gets(arr);
    for(i = 0; arr[i] != '\0'; i++){
        length++;
    }
    int count = length;
    printf("Copy of reversed string is : ");
    for(i = 0; i < length; i++){
        count--;
        copyrev[count] = arr[i];
    }
    for(i = 0; i < length; i++){
        printf("%c", copyrev[i]);
    }
    return 0;
}