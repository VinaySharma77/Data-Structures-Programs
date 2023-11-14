#include <stdio.h>

int main(){
    char arr1[50], arr2[50], arr3[100];
    int i = 0, j = 0;
    printf("Enter first string : ");
    gets(arr1);
    printf("Enter second string : ");
    gets(arr2);
    while(arr1[i] != '\0'){
        arr3[j] = arr1[i];
        i++;
        j++;
    }
    i = 0;
    while(arr2[i] != '\0'){
        arr3[j] = arr2[i];
        i++;
        j++;
    }
    arr3[j] = '\0';
    printf("Concatenated string : %s", arr3);
    return 0;
}