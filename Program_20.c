#include <stdio.h>

int main(){
    char arr[50];
    int i;
    printf("Enter lowercase string : ");
    gets(arr);
    printf("Uppercase string is : ");
    for(i = 0; arr[i] != '\0'; i++){
        if(arr[i] >= 97 && arr[i] <= 122){
            arr[i] = arr[i] - 32;
        }
    }
    printf("%s", arr);
    return 0;
}